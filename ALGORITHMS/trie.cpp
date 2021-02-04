//*********************** Trie ****************************

struct node{
    bool end;
    node *next[26];
    node(){
        end=false;
        for(int i=0;i<26;i++){
            next[i]=NULL;
        }
    }
};
node *root;

void insert(string s){
    node *now = root;
    for(int i=0;i<s.size();i++){
        int id = s[i]-'a';
        if(now->next[id]==NULL){
            now->next[id] = new node();
        }
        now = now->next[id];
    }
    now->end=true;
}

bool search(string s){
    node *now = root;
    for(int i=0;i<s.size();i++){
        int id = s[i]-'a';
        if(now->next[id]==NULL)return 0;
        now = now->next[id];
    }
    if(now->end)return 1;
    return 0;
}

void del(node *now){
    for(int i=0;i<26;i++){
        if(now->next[i]!=NULL){
            del(now->next[i]);
        }
    }
    delete(now);
}

//******** maximum and minimum sub array XOR ********

ll power[50];
 
struct node{
    bool flg;
    node *nxt[2];
    node(){
        flg=false;
        for(int i=0;i<2;i++)nxt[i] = NULL;
    }
};
 
void insert(node *cur, ll mask){
    for(int i=31; i>=0; i--){
        bool id = check_bit(mask,i);
        if(!cur->nxt[id])cur->nxt[id] = new node();
        cur = cur->nxt[id];
    }
    cur->flg = true;
}
 
ll query_mx(node *cur, ll mask){
    ll ret=0;
    for(int i=31; i>=0; i--){
        bool id = check_bit(mask, i);
        if(cur->nxt[id^1]){
            ret += power[i];
            cur = cur->nxt[id^1];
        }
        else cur = cur->nxt[id];
    }
    return ret;
}
 
ll query_mn(node *cur, ll mask){
    ll ret=0;
    for(int i=31; i>=0; i--){
        bool id = check_bit(mask, i);
        if(cur->nxt[id]) cur = cur->nxt[id];
        else{ 
            ret += power[i];
            cur = cur->nxt[id^1];
        }
    }
    return ret;
}
 
int main(){
    power[0]=1;
    for(int i=1;i<=33;i++)power[i] = power[i-1]*2;
 
    int t, tst=1;
    scanf("%d", &t);
    while(t--){
        node *root = new node();
 
        int n;
        scanf("%d",&n);
 
        ll x_or = 0, val, mx = -(1l<<55), mn = (1l<<55);
        insert(root, x_or);
 
        for(int i=0; i<n; i++){
            scanf("%lld", &val);
            x_or = x_or ^ val;
            mx = max(mx, query_mx(root, x_or));
            mn = min(mn, query_mn(root, x_or));
            insert(root, x_or);
        }
        del(root);
 
        printf("Case %d: %lld %lld\n", tst++, mx, mn);
    }
    return 0;
}

//******** number of subarray with xor less then X ********

struct node{
    int cnt;
    node *nxt[2];
    node(){
        cnt=0;
        for(int i=0;i<2;i++)nxt[i]=NULL;
    }
};
 
void insert(ll mask, node *cur){
    for(int i=31;i>=0;i--){
        bool id = check_bit(mask, i);
        if(cur->nxt[id] == NULL)cur->nxt[id] = new node();
        cur = cur->nxt[id];
        cur->cnt++;
    }
}
 
 
ll search(node *cur, ll mask, ll k){
    ll ans=0;
    for(int i=31;i>=0;i--){
        bool id1 = check_bit(mask, i);
        bool id2 = check_bit(k, i);
        if(cur->nxt[id1^1] && id2){
            if(cur->nxt[id1])ans += cur->nxt[id1]->cnt;
            cur = cur->nxt[id1^1];
        }
        else if(cur->nxt[id1^1]){
            if(cur->nxt[id1])cur = cur->nxt[id1];
            else break;
        }
        else if(cur->nxt[id1] && id2){
            ans += cur->nxt[id1]->cnt;
            break;
        }
        else{
            if(cur->nxt[id1])cur = cur->nxt[id1];
            else break;      
        }
 
    }
 
    return ans;
}
 

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        node *root = new node();
 
        ll n, k;
        scanf("%lld %lld",&n, &k);
 
        ll x_or=0, ans=0, x;
 
        insert(x_or, root);
 
        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            x_or = x_or ^ x;
            ans += search(root, x_or, k);
            insert(x_or, root);
        }
 
        printf("%lld\n", ans);
 
        del(root);
    }
    return 0;
}
//****************************************************************

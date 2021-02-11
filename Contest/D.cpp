#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
typedef vector<int>         vi;
typedef vector<ll>          vll;
#define ff                  first
#define sf                  scanf
#define pf                  printf
#define ss                  second
#define ppb                 pop_back
#define pb                  push_back
#define MP                  make_pair
#define MAXN                10005
#define eps                 1e-9
#define MOD                 1000000007
#define inf                 0x3f3f3f3f
#define PI                  (2.0*acos(0.0))
#define INF                 0x3f3f3f3f3f3f3f3f
#define rev(v)              reverse(all(v))
#define all(v)              v.begin(), v.end()
#define __lcm(x, y)         (x * y) / __gcd(x, y)
#define FOR(i, x, y)        for(int i = x; i < y; i++)
#define RFOR(i, x, y)       for(int i = x; i >= y; i--)
#define MEM(arr, val)       memset(arr, val, sizeof(arr));
#define ubound(v, x)        (upper_bound(all(v), x) - v.begin())
#define lbound(v, x)        (lower_bound(all(v), x) - v.begin())
#define unq(v)              (v).resize(unique(all(v)) - v.begin())
#define READ()              freopen("input.txt", "r", stdin)
#define WRITE()             freopen("output.txt", "w", stdout)
#define si(n)               scanf("%d", &n)
#define sl(n)               scanf("%lld", &n)
#define sii(a, b)           scanf("%d %d", &a, &b)
#define sll(a, b)           scanf("%lld %lld", &a, &b)
#define siii(a, b, c)       scanf("%d %d %d", &a, &b, &c)
#define slll(a, b, c)       scanf("%lld %lld %lld", &a, &b, &c)
#define siiii(a, b, c, d)   scanf("%d %d %d %d", &a, &b, &c, &d)
#define sllll(a, b, c, d)   scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
#define vout(v)             for(int i = 0; i < v.size(); i++) {cout << v[i]; if(i < v.size() - 1) cout << ' '; else cout << endl;}

int ans;
struct node{
    bool end;
    node *next[11];
    node(){
        end=false;
        for(int i=0;i<11;i++){
            next[i]=NULL;
        }
    }
};

void insert(node *root, string s){
    node *now = root;
    for(int i=0;i<s.size();i++){
        int id = s[i]-'0';
        if(now->next[id]==NULL){
            now->next[id] = new node();
        } else if(i + 1 == s.size()){
        	// cout << now->next[id] << endl;
        	ans = 0;
        }
        if(now->end) ans = 0;
        // cout << s[i] << " ->" << now->end << endl;
        now = now->next[id];
    }
    now->end=true;
}

void del(node *now){
    for(int i=0;i<10;i++){
        if(now->next[i]!=NULL){
            del(now->next[i]);
        }
    }
    delete(now);
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int t, cs = 0; si(t);
        while(t--){
        	int n; si(n);
        	node *root = new node();
        	ans = 1;
        	while(n--){
        		string s; cin >> s;
        		insert(root, s);
        	}
        	pf("Case %d: ", ++cs);
        	puts(ans ? "YES" : "NO");
        	del(root);
        	// cout << ans << endl;
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
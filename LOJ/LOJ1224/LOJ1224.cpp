/*
	Solved!
	Date: 20-20-2021
	Time: 06:52:16 PM
*/
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
#define MAXN                100005
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
#define ubound(v,x)         (upper_bound(all(v), x) - v.begin())
#define lbound(v,x)         (lower_bound(all(v), x) - v.begin())
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
    int cnt;
    bool end;
    node *next[4];
    node(){
        end=false;
        cnt = 0;
        for(int i=0;i<4;i++){
            next[i]=NULL;
        }
    }
};

void insert(node *now, string s){
    for(int i=0;i<s.size();i++){
        int id;
        if(s[i] == 'A') id = 0;
        if(s[i] == 'C') id = 1;
        if(s[i] == 'G') id = 2;
        if(s[i] == 'T') id = 3;
        
        if(now->next[id]==NULL){
            now->next[id] = new node();
        }
        now = now->next[id];
        now->cnt++;
        ans = max(ans, now->cnt * (i + 1));
    }
    now->end=true;
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int t, cs = 0; si(t);
        while(t--){
            int n; si(n);
            node *root = new node();
            ans = 0;
            while(n--){
                string s; cin >> s;
                insert(root, s);
            }
            pf("Case %d: %d\n", ++cs, ans);
        }
    
    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif
    return 0;
}
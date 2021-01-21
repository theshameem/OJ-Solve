/*
    Solved!
    Time: 01:30:04 AM
    Date: 17-05-2020
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
#define MAXN                10000
#define MOD                 100000007
#define inf                 0x3f3f3f3f
#define PI                  (2.0*acos(0.0))
#define INF                 0x3f3f3f3f3f3f3f3f
#define rev(v)              reverse(all(v))
#define all(v)              v.begin(), v.end()
#define __lcm(x, y)         (x * y) / __gcd(x, y)
#define FOR(i, x, y)        for(int i = x; i < y; i++)
#define RFOR(i, x, y)       for(int i = x; i >= y; i--)
#define MEM(arr, val)       memset(arr, val, sizeof(arr));
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

vector<int> factors;
int BFS(int s, int t);
void genFact(int n);

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int tc, cs = 0; si(tc);
        while(tc--){
            int s, t; sii(s, t);
            int ans = BFS(s, t);
            pf("Case %d: %d\n", ++cs, ans);
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}

int BFS(int s, int t){
    if(s == 1) return -1;
    queue<int> Q;
    int vis[MAXN]; MEM(vis, 0);
    int dist[MAXN]; MEM(dist, -1);

    Q.push(s);
    vis[s] = 0;
    dist[s] = 0;

    while(Q.size()){
        int val = Q.front();
        Q.pop();
        genFact(val);
        if(factors[0] == val || val > t) continue;
        
        FOR(i, 0, factors.size()){
            int x = val + factors[i];
            if(x <= t){
                if(vis[x] == 0){
                    Q.push(x);
                    vis[x] = 1;
                    dist[x] = dist[val] + 1;
                }
            }
        }
    }
    return dist[t];
}

void genFact(int n){
    factors.clear();
    int val = 2;
    while(n > 1){
        if(n % val == 0){
            while(n % val == 0) n /= val;
            factors.pb(val);
        }
        ++val;
    }
}

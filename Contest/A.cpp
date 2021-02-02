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
#define MAXN                50005
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

bool solve(ll n){
    if(n % 2020 == 0 || n % 2021 == 0) return true;
    while(n >= 2020){
        n -= 2021;
        if(n % 2020 == 0 || n % 2021 == 0) return true;
    }
    if(n % 2020 == 0 || n % 2021 == 0) return true;
    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int t; si(t);
        while(t--){
            int a, b, k; siii(a, b, k);
            vector<int> boys(k), girls(k);
            map<int, int> boysMap, girslMap;
            map<pair<int, int>, int> PairMap;

            FOR(i, 0, k){
                si(boys[i]);
                boysMap[boys[i]]++;
            }
            FOR(i, 0, k){
                si(girls[i]);
                girslMap[girls[i]]++;
                PairMap[{boys[i], girls[i]}]++;
            }

            ll ans = 0;
            FOR(i, 0, k){
                int cnt = k;
                ans -= boysMap[boys[i]];
                ans -= girslMap[girls[i]];
                ans += PairMap[{boys[i], girls[i]}];
                ans += cnt;
            }
            cout << ans / 2 << endl;
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
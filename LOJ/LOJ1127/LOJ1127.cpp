/*
    Solved!
    Time: 10:35:30 PM
    Date: 07-04-2020
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
#define MAXN                1010
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

vll valA, valB;
ll v[35], n, w;

void BT(ll pos, ll amount){
    if(pos == n) {
        if(amount <= w) valA.pb(amount);
        return;
    }
    BT(pos + 1, amount);
    BT(pos + 1, amount + v[pos]);
}

ll solve(){
    ll res = 0;
    FOR(i, 0, valA.size()){
        ll possible = w - valA[i];
        auto up = upper_bound(all(valB), possible);
        res += (up - valB.begin());
    }
    return res;
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int tc, cs = 0; si(tc);
        while(tc--){
            sll(n, w);
            ll n1 = n / 2, n2 = n - n1;
            int flg = 0;
            if(n == 1){
                ll ans, x; sl(x);
                if(x <= w) ans = 2;
                else ans = 1;
                pf("Case %d: %lld\n", ++cs, ans);
                continue;
            }
            n = n1;
            FOR(i, 0, n) sl(v[i]);
            BT(0, 0);
            valB = valA;
            valA.clear();

            n = n2;
            FOR(i, 0, n) sl(v[i]);
            BT(0, 0);

            sort(all(valB));
            sort(all(valA));
            
            ll ans;
            ans = solve();
            pf("Case %d: %lld\n", ++cs, ans);

            valA.clear();
            valB.clear();
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}

/*
	Solved!
	Date: 38-01-2021
	Time: 09:30:01 PM
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

ll n, n1, n2;
vector<ll> v1, v2;
vector<pair<ll, ll>> jack, jill;

bool cmp(const pair<ll,ll> &a,  const pair<ll,ll> &b){ 
    if(a.ff == b.ff) return a.ss < b.ss;
    return a.ff < b.ff;
} 

void JackBT(ll pos, ll p1, ll p2){
    if(pos == n1){
        jack.push_back({p1 - p2, p1 + p2});
        return;
    }
    JackBT(pos + 1, p1 + v1[pos], p2);
    JackBT(pos + 1, p1, p2 + v1[pos]);
    JackBT(pos + 1, p1, p2);
}

void JillBT(ll pos, ll p1, ll p2){
    if(pos == n2){
        jill.push_back({p1 - p2, p1 + p2});
        return;
    }
    JillBT(pos + 1, p1 + v2[pos], p2);
    JillBT(pos + 1, p1, p2 + v2[pos]);
    JillBT(pos + 1, p1, p2);
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        while(cin >> n){
            if(n == 0) break;
            n1 = n / 2, n2 = n - n1;
            ll total = 0, ans = 0;

            vll v(n);
            FOR(i, 0, n){
                sl(v[i]);
                total += v[i];
            }

            sort(all(v));
            int i = 0;
            while(i < n1){
                v1.pb(v[i]);
                ++i;
            }
            while(i < n){
                v2.pb(v[i]);
                ++i;
            }

            JackBT(0, 0, 0);
            JillBT(0, 0, 0);

            sort(all(jill), cmp);
            FOR(i, 0, jack.size()){
                ll lo = 0, hi = jill.size() - 1, idx = -1;
                while(lo <= hi){
                    ll mid = (lo + hi) / 2;
                    if(jill[mid].ff <= (-jack[i].ff)){
                        idx = mid;
                        lo = mid + 1;
                    } else {
                        hi = mid - 1;
                    }
                }
                if(idx != -1 && jill[idx].ff == (-jack[i].ff)){
                    ans = max(ans, jill[idx].ss + jack[i].ss);
                }
            }
            cout << total - ans << endl;

            v1.clear();
            v2.clear();
            jack.clear();
            jill.clear();
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
/*
	Solved!
	Date: 30-01-2021
	Time: 10:52:03 AM
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
#define MAXN                1e18
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
#define eps					1e-9

ll Fibs[100], fib_idx;
vector<ll> genA, genB;

void genFibs(){
	Fibs[0] = 2;
	Fibs[1] = 3;
	for(int i = 2; i < 86 ; i++){
		fib_idx = (ll)i + 1;
		Fibs[i] = Fibs[i - 1] + Fibs[i - 2];
	}
}

void call(int pos, int ed, int genX, ll made){
	if(pos == ed){
		if(genX == 1) genA.push_back(made);
		else genB.push_back(made);
		return;
	}

	call(pos + 1, ed, genX, made);
	if(made <= ((long double)MAXN / Fibs[pos]) + eps){
		call(pos, ed, genX, made * Fibs[pos]);
	}
}

void solve(ll a, ll b){
	ll ans = 0, val = 0;

	FOR(i, 0, genA.size()){
		if(genA[i] > b) break;
		ll lo = 0, hi = genB.size() - 1;
		while(lo <= hi){
			ll mid = (lo + hi) / 2;
			if(genA[i] <= (b / genB[mid]) + eps){
				val = max(val, genA[i] * genB[mid]);
				lo = mid + 1;
			} else {
				hi = mid - 1;
			}
		}
		ans = max(ans, val);
		val = 0;
	}
	if(ans < a || ans == 0) ans = -1; 
	pf("%lld\n", ans);
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        genFibs();
        call(0, 5, 1, 1);
        call(5, fib_idx, 2, 1);

        sort(all(genA)); unq(genA);
        sort(all(genB)); unq(genB);

        int t; si(t);
        while(t--){
        	ll a, b; sll(a, b);
        	solve(a, b);
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
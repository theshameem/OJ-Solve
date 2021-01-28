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

vll luckyNumbers, vluckyNumbers;
void BT(ll n){
	if(n > 1e12) return;
	luckyNumbers.push_back(n);
	BT((n * 10) + 4);
	BT((n * 10) + 7);
}

void BTFinal(ll pos, ll val){
	if(val > 1e12 || val <= 0) return;

	if(val > 1) vluckyNumbers.push_back(val);
	for(int i = pos; i < luckyNumbers.size(); i++){
		if(((val * luckyNumbers[i]) > 1e12) || ((val * luckyNumbers[i]) <= 0)) {
			break;
		}
		BTFinal(i, (val * luckyNumbers[i]));
	}
}

ll solve(ll a, ll b){
	ll lo = lbound(vluckyNumbers, a);
	ll hi = ubound(vluckyNumbers, b);

	return (ll)(hi - lo);
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        BT(0);
        sort(all(luckyNumbers));
        luckyNumbers.erase(luckyNumbers.begin());
        BTFinal(0, 1);
        sort(all(vluckyNumbers)); unq(vluckyNumbers);

        int t, cs = 0; si(t);
        while(t--){
        	ll a, b; sll(a, b);
        	ll ans = solve(a, b);
        	pf("Case %d: %lld\n", ++cs, ans);
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
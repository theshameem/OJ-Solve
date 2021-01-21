/*
	Solved!
	Time: 07:46:16 PM
	Date: 04-02-2020
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
#define __lcm(x, y)			(x * y) / __gcd(x, y)
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

int n, make;
int dp[55][55][MAXN];
int coin[200], total_coin[200];
int func(int i, int taken_i, int amount);

int main(){
	#ifndef ONLINE_JUDGE
		double start = clock(); READ(); WRITE();
	#endif
	    int tc, cs = 0; si(tc);
	    while(tc--){
	    	sii(n, make);
	    	FOR(i, 0, n) si(coin[i]);
	    	FOR(i, 0, n) si(total_coin[i]);
	    	MEM(dp, -1);
	    	int ans = func(0, 0, make);
	    	pf("Case %d: %d\n", ++cs, ans);
	    }

	#ifndef ONLINE_JUDGE
		printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	#endif

	return 0;
}

int func(int i, int taken_i, int amount){
	if(i >= n) {
		if(amount == 0) return 1;
		return 0;
	}
	if(dp[i][taken_i][amount] != -1) return dp[i][taken_i][amount];
	
	int res1 = 0, res2 = 0;
	if(amount - coin[i] >= 0 && taken_i < total_coin[i]){
		res1 = func(i, taken_i + 1, amount - coin[i]);
	}
	res2 = func(i + 1, 0, amount);
	return dp[i][taken_i][amount] = (res1 + res2) % MOD;
}
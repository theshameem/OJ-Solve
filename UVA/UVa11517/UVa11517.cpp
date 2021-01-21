/*
	Solved!
	Time: 10:59:21 AM
	Date: 10-02-2020
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

int n, pay, res, sum;
int dp2[MAXN][105][105];
int coin[105], dp[MAXN][105];

int solve(int amount, int pos){
	if(amount >= pay) {
		res = min(res, amount);
		return amount;
	}
	if(pos == n) return 0;
	if(dp[amount][pos] != -1) return dp[amount][pos];
	
	int res1 = min(sum, solve(amount + coin[pos], pos + 1));
	int res2 = min(sum, solve(amount, pos + 1));
	return dp[amount][pos] = min(res1, res2);
}

int countCoin(int amount, int pos, int cnt){
	if(amount == pay){
		res = min(res, cnt);
		return 1;
	}
	if(pos == n) return 0;
	if(dp2[amount][pos][cnt] != -1) return 0;

	int res1 = 0;
	if(amount + coin[pos] <= pay) res1 = countCoin(amount + coin[pos], pos + 1, cnt + 1);
	int res2 = countCoin(amount, pos + 1, cnt);
	return dp2[amount][pos][cnt] = min(res1, res2);
}

int main(){
	#ifndef ONLINE_JUDGE
		double start = clock(); READ(); WRITE();
	#endif
	    int tc; si(tc);
	    while(tc--){
	    	sii(pay, n);
	    	sum = 0;
	    	FOR(i, 0, n) {
	    		si(coin[i]);
	    		sum += coin[i];
	    	}
	    	MEM(dp, -1);
	    	res = inf;
	    	int ans = solve(0, 0);
	    	ans = res, pay = res;
	    	res = inf;
	    	MEM(dp2, -1);
	    	int x = countCoin(0, 0, 0);
	    	pf("%d %d\n", ans, res);
	    }

	#ifndef ONLINE_JUDGE
		printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	#endif

	return 0;
}
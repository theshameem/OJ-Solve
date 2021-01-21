/*
	Solved!
	Time: 03:05:15 PM
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
#define MAXN                50005
#define MOD                 10000007
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

int dp[30][30][MAXN], n, c, cap;
vi v[25];
int func(int i, int j, int val){
	if(i == c) return 0;
	if(j == v[i].size()) return 0;
	if(dp[i][j][val] != -1) return dp[i][j][val];
	
	int p1 = 0, p2 = 0;
	if(v[i][j] + val <= n) p1 = v[i][j] + func(i + 1, 0, val + v[i][j]);
	p2 = func(i, j + 1, val);

	return dp[i][j][val] = max(p1, p2);
}

int main(){
	#ifndef ONLINE_JUDGE
		double start = clock(); READ(); WRITE();
	#endif
	    int tc; si(tc);
	    while(tc--){
	    	sii(n, c);
	    	FOR(i, 0, c){
	    		int sz; si(sz);
	    		FOR(j, 0, sz){
	    			int x; si(x);
	    			v[i].pb(x);
	    		}
	    		sort(all(v[i]));
	    	}
	    	int ans = -1, sum = 0;
	    	FOR(i, 0, c){
	    		sum += v[i][0];
	    	}
	    	if(sum <= n){
	    		MEM(dp, -1);
	    		ans = func(0, 0, 0);
	    	}

	    	if(ans == -1) puts("no solution");
	    	else pf("%d\n", ans);

	    	FOR(i, 0, c) v[i].clear();
	    }

	#ifndef ONLINE_JUDGE
		printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	#endif

	return 0;
}
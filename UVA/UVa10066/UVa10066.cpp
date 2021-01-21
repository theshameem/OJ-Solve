/*
	Solved!
	Time: 04:59:20 PM
	Date: 09-02-2020
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

vi tower1, tower2;
int n, m, dp[1005][1005];
int calLCS(int i, int j){
	if(i == n || j == m) return 0;
	if(dp[i][j] != -1) return dp[i][j];

	int res = 0;
	if(tower1[i] == tower2[j]) res = max(res, 1 + calLCS(i + 1, j + 1));
	else res = max(calLCS(i, j + 1), calLCS(i + 1, j));
	
	return dp[i][j] = res;
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int cs = 0;
        while(sii(n, m)){
        	if(n == 0 && m == 0) break;
        	FOR(i, 0, n){
        		int x; si(x);
        		tower1.pb(x);
        	}
        	FOR(j, 0, m){
        		int x; si(x);
        		tower2.pb(x);
        	}
        	MEM(dp, -1);
        	int ans = calLCS(0, 0);
        	pf("Twin Towers #%d\n", ++cs);
        	pf("Number of Tiles : %d\n\n", ans);
        	tower1.clear(), tower2.clear();
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
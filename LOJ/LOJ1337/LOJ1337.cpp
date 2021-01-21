/*
	Solved!
	Time: 08:17:03 PM
	Date: 05-05-2020
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

string s[505];
int m, n, q, dp[505][505], ans = 0;

void floodfill(int i, int j){
	if(i >= m || j >= n || i < 0 || j < 0) return;
	if(s[i][j] == '#' || s[i][j] == '1') return;
	else if(s[i][j] == 'C') s[i][j] = '1', ++ans;
	else s[i][j] = '1';

	floodfill(i, j + 1);
	floodfill(i, j - 1);
	floodfill(i + 1, j);
	floodfill(i - 1, j);
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int tc, cs = 0; si(tc);
        while(tc--){
        	siii(m, n, q);
        	FOR(i, 0, m) cin >> s[i];

        	MEM(dp, -1);
        	pf("Case %d:\n", ++cs);
        	while(q--){
        		int x, y, res; sii(x, y);
        		--x, --y;
        		if(dp[x][y] == -1){
        			string tmp[505];
        			FOR(i, 0, m) tmp[i] = s[i];
        			floodfill(x, y);
        			FOR(i, 0, m) FOR(j, 0, n) if(s[i][j] == '1') dp[i][j] = ans;
        			FOR(i, 0, m) s[i] = tmp[i];
        			ans = 0;
        		}
        		pf("%d\n", dp[x][y] == -1 ? int(0) : dp[x][y]);
        	}
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
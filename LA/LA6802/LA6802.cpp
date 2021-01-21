/*
	Solved!
	Time: 06:22:02 PM
	Date: 14-01-2020
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
#define MAXN                1000
#define MOD                 10000007
#define inf                 0x3f3f3f3f
#define PI                  (2.0*acos(0.0))
#define INF                 0x3f3f3f3f3f3f3f3f
#define rev(v)              reverse(all(v))
#define all(v)              v.begin(), v.end()
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

int main(){
	#ifndef ONLINE_JUDGE
		double start = clock(); READ(); WRITE();
	#endif
	    int tc, cs = 0; si(tc);
	    while(tc--){
	    	int x, y; sii(x, y);
	    	string s; cin >> s;

	    	int graph[70][70]; MEM(graph, 0);
	    	int right = 0, left = 0, up = 0, down = 1, ad_y = 0, ad_x = 1, cnt = 0;
	    	swap(x, y);
	    	graph[x][y]++;

	    	FOR(i, 0, s.size()){
	    		if(s[i] == 'F'){
	    			x += ad_x, y += ad_y;
	    			graph[x][y]++;
	    		} else if(s[i] == 'R'){
	    			if(down == 1){
	    				left = ad_y = 1;
	    				down = up = right = ad_x = 0;
	    			} else if(up == 1){
	    				right = 1, ad_y = -1;
	    				down = left = up = ad_x =  0;
	    			} else if (left == 1){
	    				up = 1, ad_x = -1;
	    				down = right = left = ad_y = 0;
	    			} else {
	    				down = 1, ad_x = 1;
	    				up = right = left = ad_y = 0;
	    			}
	    		} else {
	    			if(down == 1){
	    				right = 1, ad_y = -1;
	    				down = up = left = ad_x = 0;
	    			} else if(up == 1){
	    				left = 1, ad_y = 1;
	    				down = right = up = ad_x =  0;
	    			} else if (left == 1){
	    				down = 1, ad_x = 1;
	    				up = right = left = ad_y = 0;
	    			} else {
	    				up = 1, ad_x = -1;
	    				down = right = left = ad_y = 0;
	    			}
	    		}
	    	}
	    	FOR(i, 0, 70) FOR(j, 0, 70) if(graph[i][j] > 1) ++cnt;
	    	pf("Case #%d: %d %d %d\n", ++cs, y, x, cnt);
	    }

	#ifndef ONLINE_JUDGE
		printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	#endif

	return 0;
}

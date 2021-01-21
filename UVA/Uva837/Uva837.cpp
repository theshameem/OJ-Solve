/*
	Solved!
	Time: 03:48:03 PM
	Date: 20-01-2020
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

double solve(double a, double b);
vector<pair<pair<double, double>, double>> v;
int main(){
	#ifndef ONLINE_JUDGE
		double start = clock(); READ(); WRITE();
	#endif
	    int tc; si(tc);
	    while(tc--){
	    	int n; si(n);
	    	vector<double> axis;
	    	if(n == 0){
	    		pf("1\n-inf +inf %.3lf\n", 1.0);
	    		if(tc > 0) cout << endl;
	    		v.clear();
	    		continue;
	    	}
	    	FOR(i, 0, n){
	    		double x1, y1, x2, y2, r;
	    		cin >> x1 >> y1 >> x2 >> y2 >> r;
	    		axis.pb(x1);
	    		axis.pb(x2);
	    		if(x2 < x1) swap(x1, x2);
	    		v.pb(MP(MP(x1, x2), r));
	    	}
	    	sort(all(axis)); unq(axis);
	    	cout << axis.size() + 1 << endl;
	    	pf("-inf %.3lf %.3lf\n", axis[0], 1.0);
	    	FOR(i, 1, axis.size()){
	    		double ans = solve(axis[i - 1], axis[i]);
	    		pf("%.3lf %.3lf %.3lf\n", axis[i - 1], axis[i], ans);
	    	}
	    	pf("%.3lf +inf %.3lf\n", axis[axis.size() - 1], 1.0);
	    	if(tc > 0) cout << endl;
	    	v.clear();
	    }

	#ifndef ONLINE_JUDGE
		printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	#endif

	return 0;
}

double solve(double a, double b){
	double ans = 1.0;
	FOR(i, 0, v.size()){
		if(v[i].ff.ff <= a && v[i].ff.ss >= b) ans *= v[i].ss;
	}
	return ans;
}

/*
	Solved!
	Time: 08:05:14 PM
	Date: 03-02-2020
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

ll solve(ll n);
int main(){
	#ifndef ONLINE_JUDGE
		double start = clock(); READ(); WRITE();
	#endif
	    ll n;
	    while(sl(n) && n){
	    	pf("%lld\n", solve(n));
	    }

	#ifndef ONLINE_JUDGE
		printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	#endif

	return 0;
}

ll solve(ll n){
	map<int, int> mp;
	ll x, ans;
	x = n;
	if(x < 0) x = -n;

	for(ll i = 2; i * i <= x; i++){
		while(x % i == 0){
			mp[i]++;
			x /= i;
		}
	}
	if(x > 1) mp[x]++;

	RFOR(i, 32, 1){
		ans = i;
		bool found = true;
		for(auto &it: mp){
			if(it.ss % i != 0){
				found = false;
				break;
			}
		}
		if(n >= 0 && found) break;
		if(n < 0 && found && ans % 2 == 1) break;
	}

	return ans;
}
/*
	Solved!
	Time: 09:47:12 PM
	Date: 27-01-2020
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

string solve(string s);
int main(){
	#ifndef ONLINE_JUDGE
		double start = clock(); READ(); WRITE();
	#endif
	    int tc, cs = 0;
	    cin >> tc;
	    while(tc--){
	    	string s, ans;
	    	cin >> s;
	    	ans = solve(s);
	    	cout << "Case " << ++cs << ": " << ans << endl;
	    }

	#ifndef ONLINE_JUDGE
		printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	#endif

	return 0;
}

string solve(string s){
	string tmp = s;
	int sz = tmp.size();

	if(s.size() == 1){
		if(s == "9") return "11";
		return s = s[0] + 1;
	}

	sort(all(tmp));
	if(tmp[0] == tmp[sz - 1]){
		if(tmp[0] == '9'){
			tmp = "1";
			--sz;
			while(sz--) tmp += '0';
			tmp += '1';
			return tmp;
		}
		if(sz % 2){
			tmp[sz / 2] += 1;
		} else {
			tmp[sz / 2] += 1;
			tmp[(sz / 2) - 1] += 1;
		}
		return tmp;
	}

	tmp = s;
	if(sz % 2 == 1){
		int mid = sz / 2, flg = 0, idx = 0, rem = 0;
		string t = "";
		FOR(i, 0, mid) t += tmp[i];
		rev(t);
		FOR(i, mid + 1, sz){
			if(flg) tmp[i] = t[idx];
			if(tmp[i] < t[idx] && flg == 0){
				tmp[i] = t[idx];
				flg = 1;
			} else if(tmp[i] != t[idx] && flg == 0) {
				break;
			}
			++idx;
		}
		if(flg) return tmp;
		tmp = s;
		RFOR(i, mid, 0){
			if(tmp[i] == '9'){
				tmp[i] = '0';
				rem = 1;
			} else {
				tmp[i] += 1;
				rem = 0;
				break;
			}
		}
		idx = mid - 1;
		FOR(i, mid + 1, sz) tmp[i] = tmp[idx--];
	} else {
		int mid = (sz / 2), flg = 0, idx = 0, rem = 0;
		string t = "";
		FOR(i, 0, mid) t += tmp[i];
		rev(t);
		FOR(i, mid, sz){
			if(flg) tmp[i] = t[idx];
			if(tmp[i] < t[idx] && flg == 0){
				tmp[i] = t[idx];
				flg = 1;
			} else if(flg == 0 && tmp[i] != t[idx]) {
				break;
			}
			++idx;
		}
		if(flg) return tmp;
		tmp = s;
		RFOR(i, mid - 1, 0){
			if(tmp[i] == '9'){
				tmp[i] = '0';
				rem = 1;
			} else {
				tmp[i] += 1;
				rem = 0;
				break;
			}
		}
		idx = mid - 1;
		FOR(i, mid, sz) tmp[i] = tmp[idx--];
	}
	
	return tmp;
}

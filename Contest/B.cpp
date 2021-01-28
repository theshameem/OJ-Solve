//CF 602/B
//SOlve using two pointer methods
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


void solve(int n, vi v){
	// return;
	int i = 0, j = 0, mn = v[0], ans = 1, cnt = 1, xx = 0;
	while(i < n){
		j = i + 1;
		while(j < n && abs(mn - v[j]) <= 1){
			mn = min(mn, v[j]);
			++j, ++cnt;
		}
		cout << i << " " << j << " " << cnt << endl;
		ans = max(ans, cnt);
		++i, --j, cnt = 1;
		mn = v[i];
		while(i < j && i < n){
			mn = min(mn, v[i]);
			++i, ++cnt;
		}

	}
	ans = max(ans, cnt);
	cout << ans << endl;
}

// void solve(int n, vi v){
// 	// return;
// 	int i = 0, j = 0, ans = 0, mn = v[0], cnt = 0;
// 	while(i < n && j < n){
// 		j = i + 1;
// 		while(j < n){
// 			if(abs(mn - v[j]) <= 1){
// 				mn = min(mn, v[j]);
// 				++cnt, ++j;
// 			} else {
// 				--j;
// 				break;
// 			}
// 		}
// 		ans = max(ans, abs(i - j) + 1);
// 		cout << i << " " << j << "->" << abs(i - j) + 1 << endl;
// 		++i, cnt = 0;
// 		mn = v[i];
// 		while(i < j && i < n){
// 			mn = min(mn, v[i]);
// 			++cnt, ++i;
// 		}
		
// 	}
// 	ans = max(ans, cnt + 1);
// 	cout << ans << endl;
// 	return;
// }

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int n; si(n);
        vi v(n);
        FOR(i, 0, n){
        	si(v[i]);
        }
        solve(n, v);

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
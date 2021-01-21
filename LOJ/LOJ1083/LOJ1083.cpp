/*
	Solved!
	Time: 10:34:02 PM
	Date: 04-05-2020
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
#define MAXN                30005
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

int ar[MAXN], toLeft[MAXN], toRight[MAXN];
int solve(int n){
	stack<int> st;
	FOR(i, 1, n + 1){
		if(st.size()){
			int cnt = 1;
			while(st.size()){
				if(ar[st.top()] >= ar[i]){
					cnt += toRight[st.top()];
				} else {
					break;
				}
				st.pop();
			}
			toRight[i] = cnt;
			st.push(i);
		} else {
			st.push(i);
			toRight[i] = 1;
		}
	}
	while(st.size()) st.pop();

	RFOR(i, n + 1, 1){
		if(st.size()){
			int cnt = 1;
			while(st.size()){
				if(ar[st.top()] >= ar[i]){
					cnt += toLeft[st.top()];
				} else {
					break;
				}
				st.pop();
			}
			toLeft[i] = cnt;
			st.push(i);
		} else {
			st.push(i);
			toLeft[i] = 1;
		}
	}

	int ans = 0;
	FOR(i, 1, n + 1){
		int tot = (toLeft[i] + toRight[i] - 1) * ar[i];
		ans = max(ans, tot);
	}
	return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int tc, cs = 0; si(tc);
        while(tc--){
        	int n; si(n);
        	FOR(i, 1, n + 1) si(ar[i]);
        	int ans = solve(n);
        	pf("Case %d: %d\n", ++cs, ans);
        	MEM(ar, 0); MEM(toLeft, 0); MEM(toRight, 0);
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
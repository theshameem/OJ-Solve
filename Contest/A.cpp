//CF 538-B
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
#define eps                 1e-9
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
#define ubound(v, x)        (upper_bound(all(v), x) - v.begin())
#define lbound(v, x)        (lower_bound(all(v), x) - v.begin())
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

int n, dp[68][10005]; 
vector<int> v, ans;
int solve(int pos, int amount){
	if(pos >= v.size()) return 0;
	if(dp[pos][amount] != -1) return dp[pos][amount];
	if(amount == n) return 1;

	int x, y;
	if(amount + v[pos] <= n){
		x = 1 + solve(pos + 1, amount + v[pos]);
	}
	y = solve(pos + 1, amount);
	return dp[pos][amount] = min(x, y);
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        

        // int x = 1;
        // while(x < 1e6){
        //     v.push_back(x);
        //     x *= 10;
        // }
        // x = 11;
        // while(x < 1e6){
        //     v.push_back(x);
        //     x *= 10;
        // }
        // FOR(i, 0, v.size()){
        //     if(v[i] % 10 == 0) tmp.push_back(v[i] + 1); 
        // }
        // FOR(i, 0, tmp.size()) v.push_back(tmp[i]);
        // // v.push_back(tmp);
        // sort(all(v)); unq(v);
        // vout(v);

        FOR(i, 1, 1000001){
            int num = i, flg = 1;
            while(num > 0){
                if(! (num % 10 == 1 || num % 10 == 0)) flg = 0;
                num /= 10;
            }
            if(flg) v.push_back(i);
        }
        rev(v);
        // cout << v.size() << endl;
        // vout(v);

        si(n);
        FOR(i, 0, v.size()){
            if(n < v[i]) continue;
            while(n >= v[i]){
                ans.push_back(v[i]);
                n -= v[i];
            }
        }
        // sort(all(ans));
        MEM(dp, -1);
        cout << solve(0, 0) << endl;
        // vout(ans);

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
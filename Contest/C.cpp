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
#define MAXN                1e18
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

int follower[205], n, k;
int dp[1005][1005];

int solve(int pos, int cnt, int total){
    if(cnt == k) return total;
    if(pos == n) return 0;
    if(dp[pos][cnt] != -1) return dp[pos][cnt];

    int ret1 = solve(pos + 1, cnt + 1, total + follower[pos]);
    int ret2 = solve(pos + 1, cnt, total);
    // cout << ret1 << " " << ret2 << endl;
    int res = max(ret1, ret2);
    return dp[pos][cnt] = max(ret1, ret2);
}

int findAns(int pos, int cnt, int need){
    if(cnt == k && need == 0) return 1;
    if(pos == n) return 0;
    if(cnt == k) return 0;
    if(dp[pos][cnt] != -1) return dp[pos][cnt];

    int ret1 = 0;
    if(need - follower[pos] >= 0){
        ret1 = findAns(pos + 1, cnt + 1, need - follower[pos]);
    }
    int ret2 = findAns(pos + 1, cnt, need);
    return dp[pos][need] = max(ret1, ret2);
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int t; si(t);
        while(t--){
            sii(n, k);
            FOR(i, 0, n) si(follower[i]);
            MEM(dp, -1);
            int mx = solve(0, 0, 0);
            MEM(dp, -1);
            int ans = findAns(0, 0, mx);
            cout << ans << endl;
            // cout << solve(0, 0, 0) << endl;

            // FOR(i, 0, n){
            //     FOR(j, 0, n){
            //         cout << dp[i][j] << " ";
            //     }
            //     cout << endl;
            // }
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
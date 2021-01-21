/*
	Solved!
	Time: 02:02:21 PM
	Date: 11-02-2020
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

int n, k, dp[2000][300][25], sz;
vector<ll> prime;
bool mark[10000000];
void sieve(int n);
int solve(int amount, int pos, int cnt){
	if(amount == n && cnt == k) return 1;
	if(pos >= sz || amount > n || cnt > k) return 0;
	
	if(prime[pos] > n) return 0;
	if(dp[amount][pos][cnt] != -1) return dp[amount][pos][cnt];

	int res1 = solve(prime[pos] + amount, pos + 1, cnt + 1);
	int res2 = solve(amount, pos + 1, cnt);
	return dp[amount][pos][cnt] = (res1 + res2);
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        sieve(1500);
        sz = prime.size();
        while(sii(n, k)){
        	if(n == 0 && k == 0) break;
        	MEM(dp, -1);
        	pf("%d\n", solve(0, 0, 0));
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}

void sieve(int n){
    int lim = sqrt(n);
    prime.push_back(2);
    for(int i = 3; i <= n; i += 2){
        if(! mark[i / 2]){
            prime.push_back(i);
            if(i <= lim){
                for(int j = i * i; j <= n; j += (i * 2)) mark[j / 2] = 1;
            }
        }
    }
}
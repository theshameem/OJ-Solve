/*
	Solved!
	Time: 01:27:05 PM
	Date: 23-01-2020
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
#define MAXN                10000000
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

vector<ll> prime;
bool mark[100000000];
void sieve(ll n);
ll solve(ll n);
map<ll,int> prime_factor_without_divisor(ll n);

int main(){
	#ifndef ONLINE_JUDGE
		double start = clock(); READ(); WRITE();
	#endif
	    ll n, cs = 0;
	    sieve(MAXN);
	    while(sl(n) && n){
	    	pf("Case %lld: %lld\n",++cs, solve(n));
	    }

	#ifndef ONLINE_JUDGE
		printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	#endif

	return 0;
}

ll solve(ll n){
	map<ll, int> mp; 
	mp = prime_factor_without_divisor(n);
	ll ans = 0;

	for(auto &x: mp) ans += pow(x.ff, x.ss);
	if(ans == n) ++ans;
	if(n == 1) ans = 2;
	
	return ans;
}

void sieve(ll n){
    ll lim = sqrt(n * 1.0) + 2;
    for(ll i = 4; i <= n; i += 2)	mark[i]=1;
    prime.push_back(2);
    for(ll i = 3; i <= n;i += 2){
        if(! mark[i]){
            prime.push_back(i);
            if(i < lim){
                for(ll j = i * i; j <= n;j += i * 2)	mark[j] = 1;
            }
        }
    }
}

map<ll,int> prime_factor_without_divisor(ll n){
    map<ll,int> ret;
    for(int i = 0; (prime[i] * prime[i] <= n && i < prime.size()); i++){
        while(! (n % prime[i])){
            n /= prime[i];
            ret[prime[i]]++;
        }
    }
    if(n > 1)ret[n]++;
    
    return ret;
}
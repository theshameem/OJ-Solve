/*
	Solved!
	Time: 04:26:06 PM
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
#define MAXN                50005
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
vector<ll> ansSheet;
bool mark[100000000];
void precal();
void sieve(ll n);
ll eulerPhi(ll n);

int main(){
	#ifndef ONLINE_JUDGE
		double start = clock(); READ(); WRITE();
	#endif
	    sieve(MAXN);
	    precal();
	    ll n;
	    while(sl(n) && n){
	    	pf("%lld\n", ansSheet[n - 1]);
	    }

	#ifndef ONLINE_JUDGE
		printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	#endif

	return 0;
}

void precal(){
	FOR(i, 1, MAXN){
		if(i == 1)	ansSheet.pb(1);
		else {
			ll res = ansSheet[i - 2] + (2 * eulerPhi(ll(i)));
			ansSheet.pb(res);
		}
	}
}

ll eulerPhi(ll n){
	ll ans = n;
	for(int i = 0; i < prime.size() && prime[i] * prime[i] <= n; i++){
		if(n % prime[i] == 0){
			while(n % prime[i] == 0) n /= prime[i];
			ans /= prime[i];
			ans *= (prime[i] - 1);
		}
	}
	if(n > 1){
		ans /= n;
		ans *= (n - 1);
	}

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
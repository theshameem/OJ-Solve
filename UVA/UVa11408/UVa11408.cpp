/*
	Solved!
	Time: 11:55:11 PM
	Date: 26-01-2020
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
#define MAXN                5000005
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

vector<int> DePrimes;
bool isPrime(int n);
void pregenerate();
int solve(int a, int b);

int spf[10000100];
void smallest_prime_fector(int n){// good range 1e6
    int lim=sqrt(n)+2;
    for(int i=1;i<=n;i++)spf[i]=i;
    for(int i=4;i<=n;i+=2)spf[i]=2;
    for(int i=3;i<=n;i+=2){
        if(spf[i]==i && i<=lim){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j)spf[j]=i;
            }
        }
    }
}

int logn_prime_factor(int n){
    vi ret;
    while(n != 1){
        ret.pb(spf[n]);
        n /= spf[n];
    }
    int sum = 0;
    sort(all(ret)); unq(ret);
    FOR(i, 0, ret.size()){
    	sum += ret[i];
    }
    return sum;
}

int main(){
	#ifndef ONLINE_JUDGE
		double start = clock(); READ(); WRITE();
	#endif
	    pregenerate();
	    int a, b;
	    while(si(a) && a){
	    	si(b);
	    	pf("%d\n", solve(a, b));
	    }

	#ifndef ONLINE_JUDGE
		printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	#endif

	return 0;
}

int solve(int a, int b){
	auto low = lower_bound(all(DePrimes), a);
	auto up = upper_bound(all(DePrimes), b);
	int ans = (up - DePrimes.begin()) - (low - DePrimes.begin());
	return ans;
}

bool isPrime(int n){
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0) return false;
	}
	return true;
}

void pregenerate(){
	smallest_prime_fector(MAXN);
	FOR(i, 2, MAXN){
		int ans = logn_prime_factor(i);
		if(isPrime(ans)){
			DePrimes.pb(i);
		}
	}
}

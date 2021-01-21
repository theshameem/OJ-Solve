/*
	Solved!
	Time: 11:16:12 PM
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

void Bangla(ll n);
int main(){
	#ifndef ONLINE_JUDGE
		double start = clock(); READ(); WRITE();
	#endif
	    ll n, cs = 0;
	    while(sl(n) != EOF){
	    	pf("%4lld.", ++cs);
	    	if(n < 100){
	    	    pf(" %lld\n", n);
	    	    continue;
	    	}
	    	Bangla(n);
	    	pf("\n");
	    }

	#ifndef ONLINE_JUDGE
		printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	#endif

	return 0;
}

void Bangla(ll n){
    if(n < 100 && n){
        pf(" %lld", n);
        return;
    }
    
    if(n > 9999999){
        Bangla(n / 10000000);
        pf(" kuti");
        n %= 10000000;
    }
    
    if(n > 99999){
        Bangla(n / 100000);
        pf(" lakh");
        n %= 100000;
    }
    
    if(n > 999){
        Bangla(n / 1000);
        pf(" hajar");
        n %= 1000;
    }
    
    if(n > 99){
        Bangla(n / 100);
        pf(" shata");
        n %= 100;
    }
    
    if(n){
         pf(" %lld", n);
          n %= 10;
    }
}

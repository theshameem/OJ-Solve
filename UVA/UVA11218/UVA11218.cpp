/*
	Solved!
	Date: 12-02-2021
	Time: 07:12:13 PM
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

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int n, cs = 0;
        while(cin >> n){
        	if(n == 0) break;
        	int A[n], B[n], C[n], s[n];
        	FOR(i, 0, n){
        		siiii(A[i], B[i], C[i], s[i]);
        	}
        	int ans = -1;
        	FOR(i, 0, n - 2){
        		set<int> st1;
        		st1.insert(A[i]);
        		st1.insert(B[i]);
        		st1.insert(C[i]);
        		FOR(j, i + 1, n - 1){
        			if(st1.count(A[j]) || st1.count(B[j]) || st1.count(C[j]) ) continue;
        			set<int> st2;
        			st2.insert(A[j]);
        			st2.insert(B[j]);
        			st2.insert(C[j]);
        			FOR(k, j + 1, n){
        				if(st1.count(A[k]) || st1.count(B[k]) || st1.count(C[k]) ) continue;
        				if(st2.count(A[k]) || st2.count(B[k]) || st2.count(C[k]) ) continue;
        				int sum = s[i] + s[j] + s[k];
        				ans = max(ans, sum);
        			}
        		}
        	}
        	pf("Case %d: %d\n", ++cs, ans);
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
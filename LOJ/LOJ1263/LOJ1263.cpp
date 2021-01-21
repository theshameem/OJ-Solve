/*
	Solved!
	Time: 10:48:05 PM
	Date: 10-05-2020
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

int parent[MAXN];
void initSet(int n){
	FOR(i, 1, n + 1) parent[i] = i;
}

int findParent(int node){
	if(parent[node] == node) return node;
	return parent[node] = findParent(parent[node]);
}

void unionSet(int a, int b){
	int u = findParent(a);
	int v = findParent(b);
	parent[u] = v;
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int tc, cs = 0; si(tc);
        while(tc--){
        	int n, m; sii(n, m);
        	vi v(n + 1);
        	FOR(i, 1, n + 1) si(v[i]);
        	initSet(n);
        	while(m--){
        		int u, v; sii(u, v);
        		unionSet(u, v);
        	}
        	set<int> st, val;
        	FOR(i, 1, n + 1) st.insert(findParent(i));
        	int ans = 1;
        	for(auto it: st) {
        		int cnt = 0, sum = 0;
        		FOR(i, 1, n + 1){
        			if(parent[i] == it){
        				++cnt;
        				sum += v[i];
        			}
        		}
        		if(sum % cnt != 0){
        			ans = 0;
        			break;
        		}
        		val.insert(sum / cnt);
        	}
        	if(ans == 1 && val.size() != 1) ans = 0;
        	pf("Case %d: %s\n", ++cs, ans ? "Yes" : "No");
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
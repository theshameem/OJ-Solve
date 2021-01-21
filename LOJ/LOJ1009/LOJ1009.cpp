/*
	Solved!
	Time: 04:51:12 PM
	Date: 28-05-2020
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
#define MAXN                30000
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

int mark[100010], vis[100010];
int mxNode = 0, n, ans = 0;
vector<int> v[MAXN];

void DFS(int f){
	stack<int> S;
	S.push(f);
	mark[f] = 0;

	while(S.size()){
		int val = S.top();
		S.pop();

		FOR(i, 0, v[val].size()){
			if(vis[v[val][i]] != -1) continue;
			if(mark[val] == 0) mark[v[val][i]] = 1;
			else mark[v[val][i]] = 0;
			S.push(v[val][i]);
			vis[v[val][i]] = 1;
		}
	}

	//Calculate Result
	int one = 0, zero = 0;
	FOR(i, 1, mxNode + 1){
		if(mark[i] == 0) ++zero;
		if(mark[i] == 1) ++one;
	}
	ans = max(one, zero);
}

void clr(){
	FOR(i, 1, mxNode + 1) v[i].clear();
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int tc, cs = 0; si(tc);
        while(tc--){
        	si(n);
        	FOR(i, 0, n){
        		int x, y; sii(x, y);
        		v[x].pb(y);
        		v[y].pb(x);
        		mxNode = max(mxNode, max(x, y));
        	}

        	MEM(vis, -1);
        	int val = 0;
        	FOR(i, 1, mxNode + 1){
        		if(v[i].size() && vis[i] == -1) {
        			MEM(mark, -1);
        			DFS(i);
        			val += ans;
        		}
        	}

        	pf("Case %d: %d\n", ++cs, val);
        	clr();
        	mxNode = 0;
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
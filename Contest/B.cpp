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
#define MAXN                100005
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
#define ubound(v,x)         (upper_bound(all(v), x) - v.begin())
#define lbound(v,x)         (lower_bound(all(v), x) - v.begin())
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

int node[MAXN * 3], ar[MAXN];
void build(int now, int lo, int hi){
    if(lo == hi){
        node[now] = ar[lo];
        return;
    }
    int mid = (lo + hi) / 2;

    build(now * 2, lo, mid);
    build((now * 2) + 1, mid + 1, hi);

    node[now] = min(node[now * 2], node[(now * 2) + 1]);
}

int query(int now, int lo, int hi, int l, int r){
    if(lo == l && hi == r){
        return node[now];
    }
    int mid = (lo + hi) / 2;
    if(r <= mid) return query(now * 2, lo, mid, l, r);
    else if(l > mid) return query((now * 2) + 1, mid + 1, hi, l, r);
    else{ 
        int x = query(now * 2, lo, mid, l, mid);
        int y = query((now * 2) + 1, mid + 1, hi, mid + 1, r);
        return min(x, y);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int t, cs = 0; si(t);
        while(t--){
        	int n, q; sii(n, q);
        	FOR(i, 1, n + 1) si(ar[i]);
        	build(1, 1, n);
        	pf("Case %d:\n", ++cs);
        	while(q--){
        		int a, b; sii(a, b);
        		int ans = query(1, 1, n, a, b);
        		pf("%d\n", ans);
        	}
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
// LOJ-1135-> Segment Tree
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
#define MAXN                100010
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

int n, q;
struct mydata{
	int zero, one, two;
	int lazy;
} tree[MAXN * 4];

void build(int node, int lo, int hi);
void propagate(int node, int l, int r){
	if(l != r){
		tree[node].zero += (lazy[node] * (r - l + 1));
		tree[node].one += (lazy[node] * (r - l + 1));
		tree[node].two += (lazy[node] * (r - l + 1));
	}
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int t, cs = 0; si(t);
        while(t--){
        	sii(n, q);
        	build(0, 0, n - 1);
        	while(n--){
        		int op, a, b; siii(op, a, b);
        		if(op == 1){
        			// query();
        		} else {
        			// update();
        		}
        	}
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}

void build(int node, int lo, int hi){
	if(lo == hi){
		tree[node].zero = 1;
		tree[node].one = 0;
		tree[node].two = 0;
		tree[node].lazy = 0;
		return;
	}

	int left = (lo + hi) / 2;
	int right = (lo + hi) / 2 + 1;
	build(left, lo, left);
	build(right + 1, left + 1, hi);

	tree[node].zero = tree[left].zero + tree[right].zero;
	tree[node].one = tree[left].one + tree[right].one;
	tree[node].two = tree[left].two + tree[right].two;
	tree[node].lazy = 0;
}
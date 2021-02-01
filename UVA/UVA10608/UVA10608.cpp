/*
	Solved!
	Date: 02-02-2021
	Time: 05:20:04 AM
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
#define MAXN                30005
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

int n, m, ans;
int flag[MAXN];
int parent[MAXN];

void initSet(){
    FOR(i, 0, MAXN) parent[i] = i;
}

int findSet(int node){
    if(parent[node] == node) return node;
    ++ans;
    return parent[node] = findSet(parent[node]);
}

void unionSet(int x, int y){
    int u = findSet(x);
    int v = findSet(y);
    parent[u] = v;
}

void solve(){
    int ans = 0;
    map<int, int> mp;
    ans = 0;
    int cnt = 0;
    MEM(flag, 0);
    FOR(i, 1, n + 1){
        ans = 0;
        int x = findSet(i);
        cnt = max(ans, cnt);
    }
    FOR(i, 1, n + 1){
        mp[parent[i]]++;
    }
    ans = 0;
    MEM(flag, 0);
    for(auto x: mp){
        ans = max(ans, x.ss);
    }
    pf("%d\n", ans);
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int t; si(t);
        while(t--){
            sii(n, m);
            initSet();
            FOR(i, 0, m){
                int x, y; sii(x, y);
                unionSet(x, y);
            }
            solve();
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
/*
    Solved!
    Time: 06:59:04 PM
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
void extra();

void initSet(int a){
    FOR(i, int('A'), a) parent[i] = i;
}

int findParent(int a){
    if(parent[a] == a) return a;
    return parent[a] = findParent(parent[a]);
}

void unionSet(int a, int b){
    int u = findParent(a);
    int v = findParent(b);
    if(u == v) return;
    parent[v] = u;
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int tc, flg = 0; si(tc);
        cin.ignore();
        while(tc--){
            string s;
            char ch;
            if(flg == 0) getline(cin, s);
            while(getline(cin, s)){
                if(s.size() == 0) break;
                if(s.size() == 1){
                    ch = s[0];
                    initSet(int(ch) + 1);
                    continue;
                }
                unionSet(int(s[0]), int(s[1]));
            }
            set<int>st;
            FOR(i, int('A'), int(ch) + 1) st.insert(findParent(i));
            if(flg) puts("");
            cout << st.size() << endl;
            ++flg;
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
/*
    Solved!
    Time: 04:10:03 PM
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
#define MAXN                100005
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
void initSet(int a){
    for(int i = 1; i <= a; i++) parent[i] = i;
}

int findParent(int a){
    if(parent[a] == a) return a;
    return parent[a] = findParent(parent[a]);
}

void setUnion(int a, int b){
    int u = findParent(a);
    int v = findParent(b);
    if(u == v) return;
    parent[v] = u;
}

int solve(int st, int en){
    int u = findParent(st);
    int v = findParent(en);
    if(u == v) return 1;
    return 0;
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int tc, flg = 0; si(tc);
        int n;
        while(tc--){
            si(n);
            initSet(n);
        	int zero = 0, one = 0;
            string s;
            cin.ignore();
        	while(getline(cin, s)){
                if(s.size() == 0) break;
        		char ch = s[0];
                int idx = 2;
                string sta = "", las = "";
                while(s[idx] != 32){
                    sta += s[idx];
                    ++idx;
                }
                ++idx;
                while(idx < s.size()){
                    las += s[idx];
                    ++idx;
                }
                int st = stoi(sta);
                int en = stoi(las);
        		if(ch == 'c') setUnion(st, en);
        		else {
        			int check = solve(st, en);
                    if(check == 1) zero++;
                    else one++;
        		}
        	}
            if(flg) puts("");
            pf("%d,%d\n", zero, one);
            ++flg;
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
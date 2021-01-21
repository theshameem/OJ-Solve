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
#define MAXN                10000
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

string s;
int n, mx;
vector<string> ans;
bool taken[200];
int positions[40];

void permutations(int pos, int cnt){
    if(pos >= n || cnt == mx){
        if(cnt == mx){
            string tmp = "";
            for(int i = 0; i < mx; i++) {
                tmp += s[positions[i]];
                // printf("%c", s[positions[i]]);
                // if(i + 1 == mx) pf("\n");
                //else pf(" ");
            }
            ans.push_back(tmp);
        }
        return;
    }

    for(int i = 0; i < n; i++){
        if(taken[i] == false){
            taken[i] = true;
            positions[pos] = i;
            permutations(pos + 1, cnt + 1);
            taken[i] = false;
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
       while(cin >> s >> mx){
            //cout << mx << endl;
            // cin >> mx;
            while(s.size() >= mx){
                 n = (int)s.size();
                 MEM(taken, false);
                 FOR(i, 0, s.size()){
                      permutations(i, 0);
                      taken[i] = true;
                 }
                 s.erase(s.begin());
            }
            sort(all(ans)); unq(ans);
            FOR(i, 0, ans.size()) cout << ans[i] << endl;
            ans.clear();
       }
       
       

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}

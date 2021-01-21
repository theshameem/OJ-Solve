/*
    Solved!
    Time: 11:49:45 PM
    Date: 16-05-2020
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

int r, c;
string s[205];
pair<int, int> Jane, tmp;
vector<pair<int, int>> Fire;
int valJane[205][205], valFire[205][205];

int solve();
void setJF();
void FireBFS();
void JaneBFS();

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int tc, cs = 0; si(tc);
        while(tc--){
            sii(r, c);
            FOR(i, 0, r) cin >> s[i];
            FOR(i, 0, r){
                FOR(j, 0, c){
                    if(s[i][j] == 'F'){
                        Fire.pb(MP(i, j));
                    }
                    if(s[i][j] == 'J'){
                        Jane = {i, j};
                    }
                }
            }

            setJF();
            FireBFS();
            JaneBFS();
            
            int ans = solve();
            pf("Case %d: ", ++cs);
            if(ans == -1) puts("IMPOSSIBLE");
            else pf("%d\n", ans);

            Fire.clear();
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}

int solve(){
    int ans = inf;
    FOR(i, 0, r) ans = min(ans, valJane[i][0]);
    FOR(i, 0, c) ans = min(ans, valJane[0][i]);
    FOR(i, 0, r) ans = min(ans, valJane[i][c - 1]);
    FOR(i, 0, c) ans = min(ans, valJane[r - 1][i]);
    
    if(ans == inf) return -1;
    return ans + 1;
}

void JaneBFS(){
    queue<pair<int, int>> Q;
    int vis[204][204]; MEM(vis, 0);
    int x = Jane.ff, y = Jane.ss;
    Q.push({x, y});
    vis[x][y] = 1;
    valJane[x][y] = 0;

    while(Q.size()){
        tmp = Q.front();
        Q.pop();
        x = tmp.ff, y = tmp.ss;

        //Down
        if(x - 1 >= 0){
            if(vis[x - 1][y] == 0 && s[x - 1][y] != '#' && valJane[x][y] + 1 < valFire[x - 1][y]){
                vis[x - 1][y] = 1;
                Q.push({x - 1, y});
                valJane[x - 1][y] = valJane[x][y] + 1;
            }
        }

        //Up
        if(x + 1 < r){
            if(vis[x + 1][y] == 0 && s[x + 1][y] != '#' && valJane[x][y] + 1 < valFire[x + 1][y]){
                vis[x + 1][y] = 1;
                Q.push({x + 1, y});
                valJane[x + 1][y] = valJane[x][y] + 1;
            }
        }

        //Left
        if(y - 1 >= 0){
            if(vis[x][y - 1] == 0 && s[x][y - 1] != '#' && valJane[x][y] + 1 < valFire[x][y - 1]){
                vis[x][y - 1] = 1;
                Q.push({x, y - 1});
                valJane[x][y - 1] = valJane[x][y] + 1;
            }
        }

        //Right
        if(y + 1 < c){
            if(vis[x][y + 1] == 0 && s[x][y + 1] != '#' && valJane[x][y] + 1 < valFire[x][y + 1]){
                vis[x][y + 1] = 1;
                Q.push({x, y + 1});
                valJane[x][y + 1] = valJane[x][y] + 1;
            }
        }
    }
}

void FireBFS(){
    int x, y;
    queue<pair<int, int>> Q;
    int vis[205][205]; MEM(vis, 0);

    FOR(i, 0, Fire.size()){
        x = Fire[i].ff, y = Fire[i].ss;
        Q.push({x, y});
        vis[x][y] = 1;
    }

    while(Q.size()){
        tmp = Q.front();
        x = tmp.ff, y = tmp.ss;
        Q.pop();

        //Down
        if(x - 1 >= 0){
            if(vis[x - 1][y] == 0 && s[x - 1][y] != '#'){
                vis[x - 1][y] = 1;
                Q.push({x - 1, y});
                valFire[x - 1][y] = valFire[x][y] + 1;
            }
        }

        //Up
        if(x + 1 < r){
            if(vis[x + 1][y] == 0 && s[x + 1][y] != '#'){
                vis[x + 1][y] = 1;
                Q.push({x + 1, y});
                valFire[x + 1][y] = valFire[x][y] + 1;
            }
        }

        //Left
        if(y - 1 >= 0){
            if(vis[x][y - 1] == 0 && s[x][y - 1] != '#'){
                vis[x][y - 1] = 1;
                Q.push({x, y - 1});
                valFire[x][y - 1] = valFire[x][y] + 1;
            }
        }

        //Right
        if(y + 1 < c){
            if(vis[x][y + 1] == 0 && s[x][y + 1] != '#'){
                vis[x][y + 1] = 1;
                Q.push({x, y + 1});
                valFire[x][y + 1] = valFire[x][y] + 1;
            }
        }
    }
}

void setJF(){
    FOR(i, 0, 204){
        FOR(j, 0, 204){
            valFire[i][j] = 0;
            valJane[i][j] = inf;
        }
    }
}
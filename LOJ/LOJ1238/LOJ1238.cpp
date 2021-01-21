/*
    Solved!
    Time: 01:44:07 AM
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

int m, n;
string s[25];
pair<int, int> Home, tmp;
int BFS(pair<int, int> p);

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int tc, cs = 0; si(tc);
        while(tc--){
            sii(m, n);
            FOR(i, 0, m) cin >> s[i];
            
            vector<pair<int, int>> Girls;
            
            //Position of Home and girls
            FOR(i, 0, m){
                FOR(j, 0, n){
                    if(s[i][j] == 'h'){
                        Home = MP(i, j);
                    }
                    if(s[i][j] == 'a' || s[i][j] == 'b' || s[i][j] == 'c'){
                        Girls.pb(MP(i, j));
                    }
                }
            }

            int ans = 0;
            FOR(i, 0, 3){
                ans = max(ans, BFS(Girls[i]));
            }
            pf("Case %d: %d\n", ++cs, ans);
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}

int BFS(pair<int, int> p){
    queue<pair<int, int>> Q;
    int vis[25][25]; MEM(vis, 0);
    int dist[25][25]; MEM(dist, 0);

    Q.push(p);
    vis[p.ff][p.ss] = 1;
    dist[p.ff][p.ss] = 0;

    while(Q.size()){
        tmp = Q.front();
        Q.pop();
        int x = tmp.ff, y = tmp.ss;
        char ch;
        
        //Down cell
        if(x - 1 >= 0){
            ch = s[x - 1][y];
            if(ch != 'm' && ch != '#' && vis[x - 1][y] == 0){
                Q.push({x - 1, y});
                vis[x - 1][y] = 1;
                dist[x - 1][y] = dist[x][y] + 1;
            }
        }
        //Upper Cell
        if(x + 1 < m){
            ch = s[x + 1][y];
            if(ch != 'm' && ch != '#' && vis[x + 1][y] == 0){
                Q.push({x + 1, y});
                vis[x + 1][y] = 1;
                dist[x + 1][y] = dist[x][y] + 1;
            }
        }
        //Left Cell
        if(y - 1 >= 0){
            ch = s[x][y - 1];
            if(ch != 'm' && ch != '#' && vis[x][y - 1] == 0){
                Q.push({x, y - 1});
                vis[x][y - 1] = 1;
                dist[x][y - 1] = dist[x][y] + 1;
            }
        }
        //Right Cell
        if(y + 1 < n){
            ch = s[x][y + 1];
            if(ch != 'm' && ch != '#' && vis[x][y + 1] == 0){
                Q.push({x, y + 1});
                vis[x][y + 1] = 1;
                dist[x][y + 1] = dist[x][y] + 1;
            }
        }
    }
    
    return dist[Home.ff][Home.ss];
}
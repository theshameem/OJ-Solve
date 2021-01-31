/*
	Solved!
	Date: 31-01-2021
	Time: 06:40:03 AM
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
#define MAXN                1e18
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

string s[9];
int flg, cnt;

void display(){
    FOR(i, 0, 9){
        FOR(j, 0, 9){
            pf("%c", s[i][j]);
        }
        pf("\n");
    }
}

vector<int> allCandidates(vector<int> hello){
    vector<int> v(10);
    FOR(i, 0, hello.size()){
        v[hello[i]] = 1;
    }
    hello.clear();
    FOR(i, 1, 10){
        if(v[i] == 0){
            hello.push_back(i);
        }
    }
    return hello;
}

vector<int> existingValues(int x, int y){
    vector<int> ret, tmp(10);
    //Existing values in Row
    FOR(i, 0, 9){
        if(s[x][i] != '.'){
            int val = (int)s[x][i] - '0';
            tmp[val] = 1;
        }
    }

    //Existing values in Column
    FOR(i, 0, 9){
        if(s[i][y] != '.'){
            int val = (int)s[i][y] - '0';
            tmp[val] = 1;
        }
    }

    //Existing values in 3x3 box
    int smi = x / 3 * 3;
    int smj = y / 3 * 3;
    FOR(i, 0, 3){
        FOR(j, 0, 3){
            if(s[smi + i][smj + j] != '.'){
                int val = (int)s[smi + i][smj + j] - '0';
                tmp[val] = 1;
            }
        }
    }

    //Generate the Cadidate list
    FOR(i, 1, 10){
        if(tmp[i] == 1){
            ret.push_back(i);
        }
    }
    return ret;
}

void solve(int tmp){
    //Base Case
    if(flg == 1) return;
    if(tmp == cnt){
        flg = 1;
        display();
        return;
    }

    //Get selected candidate list for empty cell
    vector<int> existVal;
    int ni = -1, nj = -1, prevSz = 0;
    FOR(i, 0, 9){
        FOR(j, 0, 9){
            if(s[i][j] != '.') continue;
            vector<int> tmpExist = existingValues(i, j);
            if(tmpExist.size() > prevSz){
                existVal = tmpExist;
                ni = i, nj = j;
                prevSz = existVal.size();
            }
        }
    }

    vector<int> canDidate = allCandidates(existVal);
    for(auto it: canDidate){
        char prevChar = s[ni][nj];
        char c = (char)(it + '0');
        s[ni][nj] = c;
        solve(tmp + 1);
        s[ni][nj] = prevChar;
        if(flg) return;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int t, cs = 0; si(t);
        while(t--){
            cnt = flg = 0;
            FOR(i, 0, 9){
                char ch[10];
                sf("%s", ch);
                s[i] = "";
                FOR(j, 0, 9){
                    s[i] += ch[j];
                    if(ch[j] == '.') ++cnt;
                }
            }
            pf("Case %d:\n", ++cs);
            solve(0);
        }
    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
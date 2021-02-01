/*
	Solved!
	Date: 31-02-2021
	Time: 11:12:04 PM
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
#define READ()              freopen("joke.in", "r", stdin)
#define WRITE()             freopen("joke.out", "w", stdout)
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
int sz, flag = 0;
bool taken[55];
vector<int> res, tmp;

void solve(int pos){
    //Base Case
    if(flag) return;
    if(pos == sz && flag == 0){
        tmp = res;
        sort(all(tmp));
        if(tmp[tmp.size() - 1] == tmp.size()){
            flag = 1;
            vout(res);
        }
        return;
    }

    int k = 0, p = 1;
    if(pos < sz - 1){
        if(s[pos + 1] == '0'){
            k = ((s[pos] - '0') * 10);
            p = 2;
        }
    }
    if(flag) return;
    k = s[pos] - '0';
    if(k <= 50 && !taken[k]){
        taken[k] = 1;
        res.push_back(k);
        solve(pos + p);
        res.pop_back();
        taken[k] = 0;
    }

    if(pos < sz - 1){
        k = (k * 10) + (s[pos + 1] - '0');
        if(k <= 50 && !taken[k]){
            taken[k] = 1;
            res.push_back(k);
            solve(pos + 2);
            res.pop_back();
            taken[k] = 0;
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); //READ(); WRITE();
    #endif
        READ(); WRITE();
        while(cin >> s){
            sz = s.size();
            MEM(taken, 0);
            res.clear();
            tmp.clear();
            flag = 0;
            solve(0);
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
/*
	Solved!
	Date: 04:02:2021
	Time: 09:24:06 PM
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
#define MAXN                50005
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

int rabin_karp(string pattern, string text, ll b, ll m) {
    int p = pattern.size(), t = text.size();

    vll power(max(t, p));
    power[0] = 1;

    for(int i = 1; i < power.size(); i++) {
        power[i] = (power[i - 1] * b) % m;
    }
    
    vll text_hash(t + 1);
    for(int i = 0; i < t; i++) {
        text_hash[i + 1] = (text_hash[i] + ((text[i] - 'a' + 1) * power[i])) % m;
    }

    ll pattern_hash = 0;
    for(int i = 0; i < p; i++) {
        pattern_hash = (pattern_hash + (pattern[i] - 'a' + 1) * power[i]) % m;
    }

    int ans = 0;
    for(int i = 0; i + p - 1 < t; i++) {
        ll hash = (text_hash[i + p] - text_hash[i] + m) % m;
        if(hash == pattern_hash * power[i] % m) {
            ++ans;
        }
    }
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        int t, cs = 0; si(t);
        while(t--){
            string a, b;
            cin >> a >> b;
            int ans = rabin_karp(b, a, (ll)3109081, (ll)4612717);
            ans = min(ans, rabin_karp(b, a, (ll)1011001, (ll)4612717));
            pf("Case %d: %d\n", ++cs, ans);
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
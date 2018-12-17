/*
    See you later
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll MAX = 1000000;
ll flag[MAX >> 6];
vector<ll> primes;
#define ck(ve) (flag[ve >> 6] & (1 << ((ve >> 1) & 31)))
#define st(ve) (flag[ve >> 6] |= (1 << ((ve >> 1) & 31)))
 
void sieve() {
    ll rt = sqrt(MAX) + 1;
    for (ll i = 3; i < rt; i += 2) if (!ck(i)) for (ll j = i * i, k = i << 1; j < MAX; j += k) st(j);
    primes.push_back(2);
    for (ll i = 3; i < MAX; i += 2) if (!ck(i)) primes.push_back(i);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    sieve();

    ll n, cnt, i, j, cpy, divisor, res, m = primes.size();
    while(scanf("%lld", &n) != EOF){
        cnt = 0, cpy = n;

        for(i = 0; primes[i] <= n; i++){
            divisor = primes[i];
            if(primes[i] > n / 2 + 1 && n != 2){
                while(primes[i++] <= n && i <= m){
                    ++cnt;
                }
                break;
            }
            res = cpy;
            while(res >= 1){
                res = res / divisor;
                cnt += res;
            }
        }
        printf("%lld\n", cnt);
    }
    
    return 0;
}

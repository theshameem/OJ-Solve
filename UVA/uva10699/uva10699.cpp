/*
    Solved!
    Time: 10:44:22 PM
    Date: 26-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll primes[1000000], n = 1000000, k = 0;
bool flag[1000000];
void sieve(){
    ll i, p, x, sum;
    memset(flag, true, sizeof(flag));
    
    for(p = 2; p <= n; p++){
        if(flag[p]){
            for(i = p * 2; i <= n; i += p){
                flag[i] = false;
            }
        }
    }
    for(i = 2; i <= n; i++){
        if(flag[i]) primes[k++] = i;
    }
}
ll prime_factors(ll n){
    ll tmp, i, j, last, cnt = 0, prev;
    bool check;
    tmp = n;
    last = tmp;
    for(i = 0; i < k; i++){
        check = true;
        while(tmp % primes[i] == 0 && tmp > primes[i]){
            if(check){
                ++cnt;
                check = false;
            }
            tmp /= primes[i];
            last = tmp;
            prev = primes[i];
        }
        if(tmp < primes[i]) break;
    }
    if(tmp > 1 && tmp != prev) return cnt + 1;
    return cnt;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    sieve();
    ll n;
    
    while(cin >> n, n != 0){
        prime_factors(n);
        cout << n << " : " <<  prime_factors(n) << endl;;
    }
    return 0;
}
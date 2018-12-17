/*
    Solved!
    Time: 09:28:21 PM
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
void prime_factors(ll n){
    bool negetive = false;
    ll tmp, i, cnt, j, last;
    if(n < 0){
        negetive = true;
        cout << n << " = -1 x ";
        tmp = n * (-1);
    } else {
        cout << n << " = ";
        tmp = n;
    }
    last = tmp;
    for(i = 0; i < k; i++){
        cnt = 0;
        while(tmp % primes[i] == 0 && tmp > primes[i]){
            ++cnt;
            tmp /= primes[i];
            last = tmp;
        }
        while(cnt--){
            cout << primes[i] << " x ";
        }
        if(tmp < primes[i]) break;
    }
    if(tmp > 1) cout << tmp << endl;
    else cout << endl;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    sieve();
    ll n;
    
    while(cin >> n, n != 0){
        prime_factors(n);
    }
    return 0;
}

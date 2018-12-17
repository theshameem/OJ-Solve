#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll primes[5000000], k = 0, n = 5000000;
vector<ll> factors;
vector<ll> :: iterator lo, hi;
void SieveOfEratosthenes(){ 
    bool prime[n + 1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (ll p = 2; p * p <= n; p++){ 
        if (prime[p] == true) {
            for (ll i = p * p; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (ll p = 2; p <= n; p++) 
       if (prime[p]) 
          primes[k++] = p;
} 
void factorization(){
    ll i, x, j, res, m = 0;

    for(i = 2; i <= n; i++){
        x = i, res = 0, j = 0;
        while(x > 1){
            if(x % primes[j] == 0){
                x /= primes[j];
                continue;
            }
            res += primes[j];
            ++j;
        }
        if(primes[res]){
            factors.push_back(i);
        }
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);    
    SieveOfEratosthenes();
    factorization();

    ll a, b, i;

    while(1){
        cin >> a >> b;
        if(a == 0)  break;

        lo = upper_bound(factors.begin(), factors.end(), a);
        hi = upper_bound(factors.begin(), factors.end(), b);

        cout << hi - lo << endl;
    }
    
    return 0;
}

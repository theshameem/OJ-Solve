/*
    Solved!
    Time: 08:40:41 PM
    Date: 19-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool prime[1000000];
ll n = 1000000;

void sieve(){
    memset(prime, true, sizeof(prime));
    for(ll p = 2; p * p <= n; p++){
        if(prime[p]){
            for(ll i = p * 2; i <= n; i += p){
                prime[i] = false;
            }
        }
    }
}

int main(){ 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    sieve();
    ll x, first, second, req, i;

    while(cin >> x && x != 0){
        for(i = 2; i <= n; i++){
            first = i;
            req = x - i;
            if(prime[req] && prime[first]){
                second = req;
                break;
            }
        }
        
        if(first > 0 && second > 0){
            printf("%lld = %lld + %lld\n", x, first, second);
        } else {
            cout << "Goldbach's conjecture is wrong.\n";
        }
    }
    return 0;
}

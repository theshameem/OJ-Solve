/*
    Solved!
    Time: 09:15:16 PM
    Date: 19-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool prime[32768];
ll n = 32768;

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

    ll x, first, second, req, i, cnt;

    while(cin >> x && x != 0){
        cnt = 0;
        for(i = 2; i <= x / 2; i++){
            first = i;
            req = x - i;
            if((prime[req] && prime[first]) || (first * 2 == x && prime[first])){
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

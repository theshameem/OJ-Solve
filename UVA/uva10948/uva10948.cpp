/*
    Solved!
    Time: 10:55:21 PM
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

    ll x, first, second, req, i, cnt, res1, res2, mx, dif;

    while(cin >> x && x != 0){
        cnt = 0, mx = 0, res1, res2;
        bool flag = true;
        for(i = 2; i <= x / 2; i++){
            first = i;
            req = x - i;
            if(prime[first] && prime[req]){
                if(flag){
                    res1 = i;
                    res2 = req; 
                    flag = false;
                }
                dif= abs(res1 - res2);
                if(dif > mx){
                    mx = dif;
                    res1 = i;
                    res2 = req;
                }
            }
        }
        if(res1 + res2 != x){
            printf("%lld:\nNO WAY!\n", x);
        } else {
            printf("%lld:\n%lld+%lld\n", x, res1, res2);   
        }
    }
    return 0;
}
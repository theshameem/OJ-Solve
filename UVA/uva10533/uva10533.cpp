/*
    Solved!
    Time: 03:18:22 PM
    Date: 25-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll digit_primes[1000000], n = 1000000, k = 0;

void sieve(){
    ll i, p, x, sum;
    bool flag[n];
    memset(flag, true, sizeof(flag));
    
    for(p = 2; p <= n; p++){
        if(flag[p]){
            for(i = p * 2; i <= n; i += p){
                flag[i] = false;
            }
        }
    }
    
    for(i = 2; i <= n; i++){
        if(flag[i]){
            x = i, sum = 0;
            while(x > 0){
                sum += (x % 10);
                x /= 10;
            }
            if(flag[sum])  digit_primes[k++] = i; 
        }
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    sieve();
    
    ll tc, from, to, i, j, cnt;
    scanf("%lld", &tc);
    
    while(tc--){
        scanf("%lld %lld", &from, &to);
        cnt = 0, i = 0;
        while(digit_primes[i] < from && i < k){
            ++i;
        }
        while(digit_primes[i] <= to && i < k){
            ++cnt;
            ++i;
        }
        printf("%lld\n", cnt);
    }
    
    return 0;
}

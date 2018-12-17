/*
    Solved!
    Time: 10:51:52 PM
    Date: 18-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll primeFactors(ll n) { 
    ll p = 0;
    ll arr[1000000];
    while (n%2 == 0){ 
        arr[p++] = 2;
        n /= 2; 
    } 
  
    for (ll i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0) { 
            arr[p++] = i;
            n /= i; 
        } 
    } 

    if (n > 2) {
        arr[p++] = n;
    }
    sort(arr, arr + p);
    ll cnt = 1, total = 1, i;
    for(i = 0; i < p; i++){
        if(arr[i + 1] == arr[i] && i < p - 1){
            ++cnt;
            continue;
        }
        total *= (cnt + 1);
        cnt = 1;
    }
    return total;
} 
void result(ll l, ll u){
    ll i, j, k = 0, cnt, mx = 0, res;

    for(i = l; i <= u; i++){
        cnt = primeFactors(i);
        if(cnt > mx){
            mx = cnt;
            res = i;
        }
    }
    printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", l, u, res, mx);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll tc, i, j, l, u;
    cin >> tc;

    while(tc--){
        cin >> l >> u;
        result(l, u);
    }
    return 0;
}

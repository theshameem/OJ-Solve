#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n = 400, k = 0;
ll primes[400];
void sieve();
int main(){
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    sieve();

    double m, a, b, g_ratio, c_ratio, mx_height, mx_width, area, mx, r1, r2;

    while(cin >> m >> a >> b, m != 0, a != 0, b != 0){
        g_ratio = a / b;
        mx_height = ceil(m / 2);
        mx_width = mx_height;
        cout << mx_height << endl;
        
     }

    return 0;
}
void sieve(){
    bool check[n];
    memset(check, true, sizeof(check));

    for(ll i = 2; i * i <= n; i++){
        if(check[i]){
            for(ll p = i * i; p <= n; p += i){
                check[p] = false;
            }
        }
    }
    for(ll i = 2; i < n; i++){
        if(check[i]){
            primes[k++] = i;
        }
    }
}

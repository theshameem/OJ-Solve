/*
    Solved!
    Time: 06:43:11 PM
    Date: 17-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll primeNumbers[2000], t = 1;
void sieveOfEratosthenes(ll n);

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    sieveOfEratosthenes(2000);
    ll n, c, i, total, printNum, center, first, last, x = 0;

    while(cin >> n >> c){
        total = 0;
        for(i = 1; i <= n; i++){
            if(primeNumbers[i] <= n){
                ++total;
            } else {
                break;
            }
        }

        if(total % 2 == 0){
            printNum = c * 2;
            center = (total / 2);
            last = ((total / 2)) + ((printNum - 2) / 2) + 1;
            first = ((total / 2)) - ((printNum - 2) / 2);
        } else {
            printNum = (c * 2) - 1;
            center = (total / 2) + 1;
            last = ((total / 2) + 1) + ((printNum - 1) / 2);
            first = ((total / 2) + 1) - ((printNum - 1) / 2);
        }

        if(total <= printNum){
            printf("%lld %lld: ", n, c);
            for(i = 1; i <= total; i++){
                if(i == total){
                    printf("%lld\n", primeNumbers[i]);
                } else {
                    printf("%lld ", primeNumbers[i]);
                }
            }
            cout << endl;
            continue;
        }

        printf("%lld %lld: ", n, c);
        for(i = first; i <= last; i++){
            if(i == last){
                printf("%lld\n", primeNumbers[i]);
            } else {
                printf("%lld ", primeNumbers[i]);
            }
        }
        cout << endl;
    }
    return 0;
}

void sieveOfEratosthenes(ll n){
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    ll k = 2000;
    for(ll p = 2; p * p <= n; p++){
        if(prime[p]){
            for(ll i = p * 2; i <= n; i += p){
                prime[i] = false;
                --k;
            }
        }
    }
    for(ll i = 1; i <= 2000; i++){
        if(prime[i])
            primeNumbers[t++] = i;
    }
}

/*
    Solved!
    Time: 04:19:32 PM
    Date: 04-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll i, j, tc, cases = 0, n, x = 1;
    scanf("%lld", &tc);

    ll fact[30];
    fact[0] = 1;

    for(i = 1; i < 25; i++){
        fact[i] = x;
        x *= i;
    }

    while(tc--){
        ll res_idx[20], k = 0, flag = 0;
        scanf(" %lld", &n);

        for(i = 21; i >= 1; i--){
            if(fact[i] <= n){
                res_idx[k++] = i;
                n -= fact[i];
            }
            if(n == 0){
                flag = 1;
                break;
            } else if (n < 0){
                break;
            }
        }
        //cout << n << endl;
        if(flag == 0 || n > 0){
            printf("Case %lld: impossible\n", ++cases);
            continue;
        }
        printf("Case %lld: ", ++cases);
        for(i = k - 1; i >= 0; i--){
            if(i == 0){
                printf("%lld!\n", res_idx[i] - 1);
            } else {
                printf("%lld!+", res_idx[i] - 1);
            }
        }

    }

    return 0;
}
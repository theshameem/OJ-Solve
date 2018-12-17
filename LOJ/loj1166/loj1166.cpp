/*
    Solved!
    Time: 08:24:35 PM
    Date: 02-12-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll tc, i, j, n, k, cases = 0;

    scanf("%lld", &tc);

    while(tc--){
        scanf("%lld", &n);
        ll num[n], res = 0;

        for(i = 0; i < n; i++){
            scanf("%lld", &num[i]);
        }

        for(i = 0; i < n; i++){
            if(num[i] == i + 1){
                continue;
            }
            for(j = i + 1; j < n; j++){
                if(num[j] == i + 1){
                    ++res;
                    swap(num[i], num[j]);
                    break;
                }
            }
        }
        printf("Case %lld: %lld\n", ++cases, res);
    }

    return 0;
}

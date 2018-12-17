/*
    Solved!
    Time: 02:51:32 PM
    Date: 29-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll tc, i, j, k, n, cases = 0, res;

    scanf("%lld", &tc);

    while(tc--){
        scanf(" %lld", &n);
        char str[n];
        scanf(" %s", str);

        res = 0;

        for(i = 0; i < n; i++){
            if(str[i] == '.'){
                if(str[i + 1] == '.' || str[i + 2] == '.'){
                    ++res;
                    i += 2;
                } else {
                    ++res;
                }
            }
        }
        printf("Case %lld: %lld\n", ++cases, res);
    }

    return 0;
}

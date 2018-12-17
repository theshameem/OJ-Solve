/*
    Solved!
    Time: 04:56:13 PM
    Date: 02-12-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll tc, n, w, x, y, res, i, j, k, area, cases = 0;

    scanf("%lld", &tc);

    while(tc--){
        scanf("%lld %lld", &n, &w);
        ll y_cordinate[n];
        for(i = 0; i < n; i++){
            scanf("%lld %lld", &x, &y_cordinate[i]);
        }
        sort(y_cordinate, y_cordinate + n);
        res = 0;
        for(i = 0; i < n; i++){
            area = y_cordinate[i] + w;
            ++res;
            while(y_cordinate[i] <= area){
                ++i;
            }
            --i;
        }
        printf("Case %lld: %lld\n", ++cases, res);
    }

    return 0;
}

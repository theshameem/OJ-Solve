/*
    Solved!
    Time: 02:39:40 AM
    Date: 09-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll tc, n, i, res, x1, x2, y1, y2, z1, z2, cases = 0;
    scanf("%lld", &tc);

    while(tc--){
        scanf(" %lld", &n);
        ll x = 0, y = 0, z = 0;
        ll a = 1001, b = 1001, c = 1001;

        for(i = 0; i < n; i++){
            scanf(" %lld %lld %lld %lld %lld %lld", &x1, &y1, &z1, &x2, &y2, &z2);
            x = max(x, x1);
            a = min(a, x2);
            y = max(y, y1);
            b = min(b, y2);
            z = max(z, z1);
            c = min(c, z2);
        }
        a -= x;
        b -= y;
        c -= z;
        res = (a * b * c);
        if(res < 0){
            res = 0;
        }
        printf("Case %lld: %lld\n", ++cases, res);
    }
    return 0;
}
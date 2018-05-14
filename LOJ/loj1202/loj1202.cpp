/*
    Solved!
    Time: 06:41:24 PM
    Date: 05-05-18
*/

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    freopen("in_1202.txt", "r", stdin);
    freopen("out_1202.txt", "w", stdout);

    int long long t, r1, c1, r2, c2, cases = 0, res, diff1, diff2;

    scanf("%lld", &t);

    while(t--){
        scanf("%lld %lld %lld %lld", &r1, &c1, &r2, &c2);

        diff1 = abs(r1 - r2);
        diff2 = abs(c1 - c2);

        if(diff1 == diff2){
            printf("Case %lld: 1\n", ++cases);
        } else if (diff1 % 2 == 0 && diff2 % 2 == 0 || diff1 % 2 == 1 && diff2 % 2 == 1){
            printf("Case %lld: 2\n", ++cases);
        } else {
            printf("Case %lld: impossible\n", ++cases);
        }
    }

    return 0;
}
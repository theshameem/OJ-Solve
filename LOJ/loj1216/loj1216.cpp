/*
    Solved!
    Time: 02:36:08 AM
    Date: 01-06-18
*/
#include <bits/stdc++.h>
using namespace std;

#define pi 2 * acos(0.0)
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int tc, cases = 0;
    double r1, r2, r3, h, p, res;

    scanf("%d ", &tc);

    while(tc--){
        scanf("%lf %lf %lf %lf", &r1, &r2, &h, &p);

        r3 = r2 + ((r1 - r2) * p) / h;

        res = ((pi * (r3 * r3 + r2 * r3 + r2 * r2)) * p) / 3.0;

        printf("Case %d: %lf\n", ++cases, res);
    }

    return 0;
}
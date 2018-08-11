/*
    Solved!
    Time: 04:12:35 PM
    Date: 02-06-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    double v1, v2, v3, a1, a2, sum = 0, distance, t1, t2;
    int cases = 0, tc;
    scanf("%d", &tc);

    while(tc--){
        scanf(" %lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);
        sum = 0;
        sum += (v1 * v1) / (2 * a1);
        sum += (v2 * v2) / (2 * a2);

        t1 = v1 / a1;
        t2 = v2 / a2;

        if(t1 > t2){
            distance = t1 * v3;
        } else {
            distance = t2 * v3;
        }

        printf("Case %d: %lf %lf\n", ++cases, sum, distance);
    }
    

    return 0;
}
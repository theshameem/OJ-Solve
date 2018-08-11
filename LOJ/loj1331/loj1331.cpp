/*
    Solved!
    Time: 05:01:20 PM
    Date: 10-07-18
*/
#include <bits/stdc++.h>
using namespace std;
#define d double
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    d r1, r2, r3;
    int cases = 0, t;

    cin >> t;

    while(t--){
        cin >> r1 >> r2 >> r3;

        d a = r1 + r2;
        d b = r2 + r3;
        d c = r3 + r1;

        d s = (a + b + c) / 2.0;

        d area_s = sqrt(1.0000000 * (s * (s - a) * (s - b) * (s - c)));

        d x = acos((b * b + c * c - a * a) / (2 * b * c));
        d y = acos((a * a + c * c - b * b) / (2 * c * a));
        d z = acos((a * a + b * b - c * c) / (2 * a * b));

        d s1 = 0.5 * ((y * r1 * r1) + (z * r2 * r2) + (x * r3 * r3));

        printf("Case %d: %.6lf\n", ++cases, area_s - s1);
    }
    
    
    return 0;
}
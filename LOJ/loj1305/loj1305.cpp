/*
    Solved!
    Time: 11:31:33 PM
    Date: 06-05-18
*/

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int ax, ay, bx, by, cx, cy, dx, dy, t, cases = 0;
    double area;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);


        dx = ax + cx - bx;
        dy = ay + cy - by;
        
        double mul = 1.0 * ((ax * by) + (bx * cy) + (cx * dy) + (dx * ay)) - ((ay * bx) + (by * cx) + (cy * dx) + (dy * ax));

        area = mul * 0.5;


        printf("Case %d: %d %d %.0lf\n", ++cases, dx, dy, abs(area));
    }

    return 0;
}

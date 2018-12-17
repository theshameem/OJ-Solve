/*
    Solved!
    Time: 06:08:30 PM
    Date: 25-05-18
*/
#include <bits/stdc++.h>
using namespace std;

double arcDistance(double ox, double oy, double ax, double ay, double bx, double by){
    double a, b, c, alpha;

    a = sqrt(((ox - ax) * (ox - ax)) + ((oy - ay) * (oy - ay)));
    b = sqrt(((ax - bx) * (ax - bx)) + ((ay - by) * (ay - by)));

    alpha = acos((a * a + a * a - b * b) / (2 * a * a));

    return alpha * a * 1.000000;
}

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int tc, cases = 0;
    double ox, oy, ax, ay, bx, by, res;

    scanf("%d ", &tc);

    while(tc--){
        scanf("%lf %lf %lf %lf %lf %lf", &ox, &oy, &ax, &ay, &bx, &by);
        
        res = arcDistance(ox, oy, ax, ay, bx, by);

        printf("Case %d: %lf\n", ++cases, res);
    }

    return 0;
}

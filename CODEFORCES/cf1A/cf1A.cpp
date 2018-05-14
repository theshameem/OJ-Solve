/*
    Solved!
    Time: 09:06:07 AM
    Date: 05-05-18
*/
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);

     double n, m, a;

     scanf("%lf %lf %lf", &n, &m, &a);

     printf("%.0lf\n", ceil(n / a) * ceil(m / a));

    return 0;
}
/*
    Solved!
    Time: 12:24:26 AM
    Date: 26-04-2018
*/

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    int k, n, s, p;

    scanf("%d %d %d %d", &k, &n, &s, &p);

    double res = ceil((n * 1.0) / (s * 1.0)) * k;

    res = ceil(res / (p * 1.0));
    printf("%.0lf\n", res);   

    return 0;
}
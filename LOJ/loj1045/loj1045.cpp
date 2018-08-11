/*
    Solved!
    Time: 5:18:01 PM
    Date: 22-05-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, a = 1;
    scanf("%d", &t);
    double pi = acos(-1);
    while(t--){
        double num, base, p = log(sqrt(2 * pi));
        scanf("%lf %lf", &num, &base);

        if(num == 0){
            printf("Case %d: 1\n", a++);
            continue;
        }

        double r = ceil((((num + 0.5) * log(num)) - num+p) / log(base));
        printf("Case %d: %.0lf\n", a++, r);
    }

    return 0;
}
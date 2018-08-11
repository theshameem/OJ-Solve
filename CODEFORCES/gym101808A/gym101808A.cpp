/*
    Solved!
    Time: 09:41:11 PM
    Date: 03-06-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int tc;
    scanf("%d", &tc);

    double R, r;

    while(tc--){
        scanf("%lf %lf", &R, &r);

        if((3.14156 * (R * R)) > (2 * (3.14156 * (r * r)))){
            printf("1\n");
        } else {
            printf("2\n");
        }
    }

    return 0;
}
/*
    Solved!
    Time: 09:36:21 PM
    Date: 19-05-18
*/
#include <bits/stdc++.h>
using namespace std;

typedef struct{
    double x;
    double y;
} cd;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n, i;
    double radius, distance = 0;

    scanf("%d %lf", &n, &radius);

    cd co_nate[n];

    for(i = 0; i < n; i++){
        scanf("%lf %lf", &co_nate[i].x, &co_nate[i].y);
        if(i >= 1){
            distance += sqrt(pow((co_nate[i].x - co_nate[i - 1].x), 2) + pow((co_nate[i].y - co_nate[i - 1].y), 2));
        }
    }

    distance += sqrt(pow((co_nate[0].x - co_nate[n - 1].x), 2) + pow((co_nate[0].y - co_nate[n - 1].y), 2));

    printf("%.2lf\n", (distance + (2 * 3.1416 * radius)));
}
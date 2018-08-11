/*
    Solved!
    Time: 12:20:21 PM
    Date: 08-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    double h, u, d, f, climb, fatigue;
    int total_day;

    while(1){
        cin >> h >> u >> d >> f;
        if(h == 0){
            break;
        }

        climb = 0, total_day = 1, fatigue = (u * f) / 100;

        while(1){
            climb += u;
            if(u > 0){
                u -= fatigue;
            }
            if(climb > h){
                break;
            }
            climb -= d;
            if(climb < 0){
                break;
            }
            ++total_day;
        }
        if(climb > 0){
            printf("success on day %d\n", total_day);
        } else {
            printf("failure on day %d\n", total_day);
        }
    }

    return 0;
}
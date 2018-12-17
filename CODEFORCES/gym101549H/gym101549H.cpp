/*
    Solved!
    Time: 10:25:26 PM
    Date: 10-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll tc, i = 0;
    cin >> tc;
    char name[50];
    char youngest[50];
    char oldest[50];
    ll dd, mm, yyyy, day, min_day, max_day;

    while(tc--){
        scanf(" %s %lld %lld %lld", name, &dd, &mm, &yyyy);
        if(i == 0){
            ++i;
            strcpy(youngest, name);
            strcpy(oldest, name);
            day = dd + (mm * 30) + (yyyy * 365);
            min_day = day;
            max_day = day;
            continue;
        }
        day = dd + (mm * 30) + (yyyy * 365);
        if(day > max_day){
            strcpy(youngest, name);
            max_day = day;
        }
        if(day < min_day){
            strcpy(oldest, name);
            min_day = day;
        }
    }
    cout << youngest << "\n" << oldest << endl;

    return 0;
}

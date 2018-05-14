/*
    Solved!
    Date: 20-04-18
    Time: 2:18:26 PM
    Weekly Individual-14
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int year;

    scanf("%d", &year);

    while(1){
        ++year;

        int mod1 = year % 10;
        int mod2 = (year % 100) / 10;
        int mod3 = (year % 1000) / 100;
        int mod4 = (year % 10000) / 1000;

        if(mod1 != mod2 && mod1 != mod3 && mod1 != mod4 && mod2 != mod3 && mod2 != mod4 && mod3 != mod4){
            printf("%d\n", year);
            break;
        } else {
            continue;
        }
    }

    return 0;
}
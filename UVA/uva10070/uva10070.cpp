/*
    Solved!
    Date: 14-04-18
    Time: 04:51:39 PM
*/

#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

int leapYear(char str[], int n){
    int div = 0, len, i;
    len = strlen(str);

    for(i = 0; i < len; i++){
        div *= 10;
        div += str[i] - '0';
        div = div % n;
    }

    div = div % n;

    return div;
}
int main(){
    freopen("in_uva10070.txt", "r", stdin);
    freopen("out_uva10070.txt", "w", stdout);

    int result = 0;
    char year[999999];

    while(scanf("%s", year) != EOF){
        if(result){
            printf("\n");
        }
        result++;
                
        if((leapYear(year, 4) == 0 && leapYear(year, 100) != 0) || (leapYear(year, 400) == 0)){
            printf("This is leap year.\n");

            if(leapYear(year, 15) == 0){
                printf("This is huluculu festival year.\n");
                result = 1;
            }

            if(leapYear(year, 55) == 0){
                printf("This is bulukulu festival year.\n");
            }
            result = 1;
        } else if(leapYear(year, 15) == 0){
            printf("This is huluculu festival year.\n");
        } else {
            printf("This is an ordinary year.\n");
        }

    }

    return 0;
}
/*
    Solved!
    Time: 03:29:21 PM
    Date: 04-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll tc, f_date, f_year, l_date, l_year, cases = 0, res, dif, cnt;
    char f_month[20];
    char l_month[20];

    scanf("%lld", &tc);

    while(tc--){
        scanf(" %s %lld, %lld", f_month, &f_date, &f_year);
        scanf(" %s %lld, %lld", l_month, &l_date, &l_year);
        cnt = 0;
        ll y1 = (f_year - 2000);
        ll res1 = (y1 / 4) + (y1 / 400) - (y1 / 100);
        ll y2 = (l_year - 2000);
        ll res2 = (y2 / 4) + (y2 / 400) - (y2 / 100);
        cnt = res2 - res1;

        if(f_year % 4 == 0 && f_year % 100 != 0 || f_year % 400 == 0){
            if(((strcmp(f_month, "January") == 0 || strcmp(f_month, "February") == 0))) ++cnt;
        }

        if(l_year % 4 == 0 && l_year % 100 != 0 || l_year % 400 == 0){
            if(strcmp(l_month, "January") != 0){
                if(strcmp(l_month, "February") == 0 && l_date < 29) --cnt;
            } else {
                --cnt;
            }
        }

        if(cnt < 0) cnt = 0;
        printf("Case %lld: %lld\n", ++cases, cnt);
    }
    return 0;
}
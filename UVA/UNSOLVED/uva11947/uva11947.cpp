#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll tc, days, in_date, in_month, in_year, cases = 0, out_date, out_month, out_year;
    cin >> tc;

    while(tc--){
        string input;
        cin >> input;

        in_month = ((input[0] - '0') * 10) + (input[1] - '0');
        in_date = ((input[2] - '0') * 10) + (input[3] - '0');
        in_year = ((input[4] - '0') * 1000) + ((input[5] - '0') * 100) + ((input[6] - '0') * 10) + (input[7] - '0');

        days = 40 * 7;
        //cout << in_year << endl;
        if(in_month <= 7){
            if(in_month == 2){
                if((in_year % 4 == 0 && in_year % 100 != 0) || in_year % 400 == 0){
                    days -= (29 - in_date);
                } else {
                    days -= (28 - in_date);
                }
            } else {
                if(in_month % 2 == 0){
                    days -= (30 - in_date);
                } else {
                    days -= (31 - in_date);
                }
            }
        } else {
            if(in_month % 2 == 0){
                days -= (31 - in_date);
            } else {
                days -= (30 - in_date);
            }
        }

        out_date = 0;
        out_month = in_month + 1;
        out_year = in_year;

        ///Birthdate, month, year calculation remaining for another day.        
    }    
    
    return 0;
}

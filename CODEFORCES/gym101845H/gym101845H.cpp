/*
    Solved!
    Time: 07:29:57 PM
    Date: 13-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll year, rem, res;
    cin >> year;

    res = year * 365;
    year += 1867;
    res += ((year / 4) - (year / 100) + (year / 400));
    res -= ((1867 / 4) - (1867 / 100) + (1867 / 400));

    rem = res % 7;

    if(rem == 0) {
        cout << "Sunday" << endl;
    } else if (rem == 1){
        cout << "Monday" << endl;
    } else if (rem == 2){
        cout << "Tuesday" << endl;
    } else if (rem == 3){
        cout << "Wednesday" << endl;
    } else if (rem == 4){
        cout << "Thursday" << endl;
    } else if (rem == 5){
        cout << "Friday" << endl;
    } else {
        cout << "Saturday" << endl;
    }

    return 0;
}
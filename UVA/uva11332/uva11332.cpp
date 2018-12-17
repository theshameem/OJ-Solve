/*
    Solved!
    Time: 08:33:18 AM
    Date: 20-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll n;

    while(cin >> n && n != 0){
        ll sum1 = 0, res, x = 10, sum2;

        while(n > 0){
            sum1 += (n % x);
            n /= 10;
        }
        
        if(sum1 >= 10){
            sum2 = (sum1 % 10);
            sum1 /= 10;
            sum2 += (sum1 % 10);
        } else {
            res = sum1;
            cout << res << endl;
            continue;
        }

        if(sum2 >= 10){
            res = (sum2 % 10);
            sum2 /= 10;
            res += (sum2 % 10);
        } else {
            res = sum2;
            cout << res << endl;
            continue;
        }

        cout << res << endl;
    }
    
    return 0;
}

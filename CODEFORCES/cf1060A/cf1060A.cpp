/*
    Solved!
    Time: 01:49:13 PM
    Date: 04-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, i, res = 0, eight = 0, sum = 0;
    cin >> n;

    char str[n];
    scanf(" %s", str);

    for(i = 0; i < n; i++){
        if(str[i] - '0' == 8){
            ++eight;
        }
    }

    ll devide = n / 11;

    if(eight >= devide) res = devide;
    else res = eight;

    cout << res << endl;

    return 0;
}

/*
    Solved!
    Time: 05:35:36 PM
    Date: 14-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll x, y, i, n, flag = 1, last = 99999999999999;
    cin >> n;

    for(i = 0; i < n; i++){
        cin >> x >> y;

        if(x > y){
            swap(x, y);
        }
        if(y <= last){
            last = y;
        } else if (x <= last){
            last = x;
        } else {
            flag = 0;
        }
    }
    printf("%s\n", flag ? "YES":"NO");

    return 0;
}
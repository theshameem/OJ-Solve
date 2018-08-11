/*
    Solved!
    Time: 12:22:23 AM
    Date: 11-07-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll a, b, c, res = 0, max = 0;

    cin >> a >> b >> c;

    res = a + b + c;
    if(res > max) max = res;
    res = a + (b * c);
    if(res > max) max = res;
    res = a * (b * c);
    if(res > max) max = res;
    res = a * (b + c);
    if(res > max) max = res;
    res = (a + b) * c;
    if(res > max) max = res;

    cout << max << endl;

    return 0;
}

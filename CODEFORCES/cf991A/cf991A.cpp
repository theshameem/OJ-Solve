/*
    Solved!
    Time: 10:08:59 PM
    Date: 23-06-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b, c, d, res1, res2, total;

    cin >> a >> b >> c >> d;

    if(a < c || b < c) {
        cout << -1 << endl;
        return 0;
    }

    res1 = a - c;
    res2 = b - c;
    total = res2 + res1 + c;

    if(total >= d || a > d || b > d || c > d) cout << -1 << endl;
    else cout << abs(d - total);

    return 0;
}
/*
    Solved!
    Time: 08:20:11 PM
    Date: 30-08-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, total1 = 0, total2 = 0, i, a, b;

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> a;
        total1 += a;
    }
    for(i = 0; i < n; i++){
        cin >> b;
        total2 += b;
    }

    if(total1 >= total2) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
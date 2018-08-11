/*
    Solved!
    Time: 02:36:00 AM
    Date: 14-07-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int k, m, n, x, y;

    while(cin >> k){
        if(k == 0) break;

        cin >> x >> y;
        while(k--){
            cin >> n >> m;

            if(x == n || y == m) cout << "divisa" << endl;
            else if (n > x && m > y) cout << "NE" << endl;
            else if (n < x && m > y) cout << "NO" << endl;
            else if (n > x && m < y) cout << "SE" << endl;
            else cout << "SO" << endl;
        }
    }

    return 0;
}
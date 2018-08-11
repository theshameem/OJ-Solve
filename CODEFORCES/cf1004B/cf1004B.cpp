/*
    Solved!
    Time: 05:32:21 PM
    Date: 02-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, m, lili, rose, i;
    cin >> n >> m;

    for(i = 0; i < m; i++){
        cin >> lili >> rose;
    }
    for(i = 0; i < n; i++){
        if(i % 2 == 1) cout << "0";
        else cout << "1";
    }
    cout << endl;

    return 0;
}
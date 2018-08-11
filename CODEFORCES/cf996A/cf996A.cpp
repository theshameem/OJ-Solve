/*
    Solved!
    Time: 10:50:34 PM
    Date: 24-06-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, res = 0, i, mod;

    cin >> n;

    ll notes[5] = {100, 20, 10, 5, 1};

    for(i = 0; i < 5; i++){
        res += n / notes[i];
        n -= notes[i] * (n / notes[i]);
    }
    cout << res << endl;
    return 0;
}

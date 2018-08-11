/*
    Solved!
    Time: 02:18:11 AM
    Date: 10-07-18
*/
#include <bits/stdc++.h>
using namespace std;
#define ll int long long
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll k, n, w, total_tk = 0;

    cin >> k >> n >> w;

    total_tk = (w * (w + 1) / 2) * k;

    if(total_tk >= n){
        cout << total_tk - n << endl;
    } else {
        cout << 0 << endl;
    }
    

    return 0;
}
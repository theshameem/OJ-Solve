/*
    Solved!
    Time: 02:57:29 AM
    Date: 10-07-18
*/
#include <bits/stdc++.h>
#include <algorithm>
#define ll int long long
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, x, y, z, cnt1 = 0, cnt2 = 0, cnt3 = 0;
    cin >> n;

    while(n--){
        cin >> x >> y >> z;
        cnt1 += x;
        cnt2 += y;
        cnt3 += z;
    }
    if(cnt1 == 0 && cnt2 == 0 && cnt3 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
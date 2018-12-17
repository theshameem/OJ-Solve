/*
    Solved!
    Time: 09:10:11 PM
    Date: 10-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, i, j, cnt = 0;
    cin >> n;

    cnt += ((n - 1) + n);
    
    for(i = 2; i < n; i++){
        (cnt += (n - i) * i);
    }
    cout << cnt << endl;
    
    return 0;
}

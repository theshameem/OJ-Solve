/*
    Solved!
    Time: 09:06:07 AM
    Date: 01-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
ll arr[200];
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n, m, i, j, x, y;
    cin >> n >> m;

    for(i = 0; i < n; i++){
        cin >> x >> y;
        for(j = x; j <= y; j++){
            arr[j] = 1;
        }
    }
    ll cnt = 0;
    for(j = 1; j <= m; j++){
        if(arr[j] == 0) ++cnt;
    }
    cout << cnt << endl;
    if(cnt == 0) return 0;
    for(i = 1; i <= m; i++){
        if(arr[i] == 0) cout << i << " ";
    }
    cout << endl;

    return 0;
}

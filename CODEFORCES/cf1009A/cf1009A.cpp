/*
    Solved!
    Time: 08:53:11 PM
    Date: 13-07-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, m, i, j = 0, cnt = 0;
    cin >> n >> m;

    ll c[n];
    ll a[m];

    for(i = 0; i < n; i++){
        cin >> c[i];
    }
    for(i = 0; i < m; i++){
        cin >> a[i];
    }

    i = 0, j = 0;

    while(i < n && j < m){
        if(c[i] <= a[j]){
            ++cnt;
            j++;
            i++;
        } else {
            i++;
        }
    }
    cout << cnt << endl;
    
    return 0;
}

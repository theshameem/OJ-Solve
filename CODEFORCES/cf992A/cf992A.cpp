/*
    Solved!
    Time: 12:50:23 AM
    Date: 12-07-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, i, cnt = 0;
    cin >> n;

    ll arr[n];

    for(i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    for(i = 0; i < n; i++){
        if(arr[i] == 0) continue;
        ++cnt;
        while(arr[i] == arr[i + 1] && i < n){
            ++i;
        }
    }

    cout << cnt << endl;

    return 0;
}

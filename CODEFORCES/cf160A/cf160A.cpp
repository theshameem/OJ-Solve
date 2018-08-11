/*
    Solved!
    Time: 02:38:29 AM
    Date: 10-10-18
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll coins, i, total = 0, res = 0, cnt = 0, x = 0;
    cin >> coins;

    ll arr[coins];

    for(i = 0; i < coins; i++){
        cin >> arr[i];
        total += arr[i];
    }
    sort(arr, arr + coins);

    i = coins - 1;

    while(res <= total && i >= 0){
        res += arr[i];
        total -= arr[i];
        ++cnt;
        --i;
    }
    cout << cnt << endl;

    return 0;
}
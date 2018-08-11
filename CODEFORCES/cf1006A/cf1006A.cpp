/*
    Solved!
    Time: 08:39:23 PM
    Date: 16-07-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, i, j;
    cin >> n;
    ll arr[n];
    
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(i = 0; i < n; i++){
        if(i == n - 1){
            if(arr[i] % 2 == 0){
                cout << arr[i] - 1 << endl;
            } else {
                cout << arr[i] << endl;
            }
        } else {
            if(arr[i] % 2 == 0){
                cout << arr[i] - 1 << " ";
            } else {
                cout << arr[i] << " ";
            }
        }
    }

    return 0;
}

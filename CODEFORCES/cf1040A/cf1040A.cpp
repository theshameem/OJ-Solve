/*
    Solved!
    Date: 06-09-18
    Time: 06:03:04 AM
*/
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, white, black, i, cnt = 0, x, k;
    cin >> n >> white >> black;

    ll arr[n];

    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(n == 2){
        if(arr[0] == 2 && arr[1] == 2){
            cnt += ((min(white, black)) * 2);
        } else if(arr[0] == 2){
            if(arr[1] == 0){
                cnt += white;
            } else {
                cnt += black;
            }
        } else if (arr[1] == 2){
            if(arr[0] == 0){
                cnt += white;
            } else {
                cnt += black;
            }
        } else if(arr[0] != arr[1]) {
            cnt = -1;
        }
        cout << cnt << endl;
        return 0;
    }
    x = n / 2;
    k = n - 1;
    for(i = 0; i < x; i++){
        if(arr[i] == arr[k] && arr[i] != 2){
            --k;
            continue;
        }
        if(arr[i] == 2 && arr[k] == 2){
            cnt += ((min(white, black)) * 2);
        } else if(arr[i] == 2){
            if(arr[k] == 0){
                cnt += white;
            } else {
                cnt += black;
            }
        } else if (arr[k] == 2){
            if(arr[i] == 0){
                cnt += white;
            } else {
                cnt += black;
            }
        } else {
            cout << -1 << endl;
            return 0;
        }
        --k;
    }
    if(n % 2 == 1 && (arr[n / 2]) == 2){
        cnt += (min(white, black));
    }
    cout << cnt << endl;
    return 0;
}

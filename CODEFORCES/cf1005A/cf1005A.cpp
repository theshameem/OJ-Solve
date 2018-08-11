/*
    Solved!
    Time: 10:17:22 PM
    Date: 09-07-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, i, max = 0, k = 0, total = 0, flag = 0;;
    cin >> n;
    ll arr[n];
    ll res[n];

    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    max = arr[0];
    for(i = 1; i < n; i++){
       total = 1;
       while(max < arr[i] && i < n){
            ++total;
            max = arr[i];
            ++i;
            flag = 1;
       }
       if(!flag){
            res[k++] = total;
            max = arr[i];
            flag = 0;
       } else {
            res[k++] = max;
            max = arr[i];
            flag = 0;
       }
    }
    if(arr[n-1] <= arr[n - 2]){
        res[k++] = 1;
    }

    cout << k << endl;
    for(i = 0; i < k; i++){
        if(i == k - 1){
            cout << res[i] << endl;
            return 0;
        }
        cout << res[i] << " ";
    }

    return 0;
}

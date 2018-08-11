/*
    AC.
    Time: 09:11:12 PM
    Date: 08-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, a, b, c, d, i, k = 0, max, res, sum;
    cin >> n;
    ll arr[n];
    for(i = 0; i < n; i++){
        cin >> a >> b >> c >> d;
        if(i == 0){
            max = a + b + c + d;
            arr[k++] = max;
            continue;
        }
        sum = a + b + c + d;
        arr[k++] = sum;
    }
    sort(arr, arr + k);
    res = 1;
    for(i = k - 1; i >= 0; i--){
        if(arr[i] == max){
            break;
        }
        ++res;
    }

    cout << res << endl;

    return 0;
}

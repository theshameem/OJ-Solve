/*
    Solved!
    Time: 11:22:23 AM
    Date: 12-07-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, max, cnt = 0, res = 0, row, col, i, j;
    cin >> n;

    if(n == 1){
        cout << "1" << endl;
        return 0;
    }
    ll arr[n][n];

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            arr[i][j] = 1;
        }
        break;
    }
    for(i = 1; i < n; i++){
        for(j = 0; j < n; j++){
            arr[i][j] = 1;
            break;
        }
    }

    for(i = 1; i < n; i++){
        cnt = 0;
        for(j = 1; j < n; j++){
            if(j == 1){
                cnt += arr[i - 1][j] + arr[i - 1][j - 1];
            } else {
                cnt += arr[i - 1][j];
            }
            arr[i][j] = cnt;
        }
    }

    cout << cnt << endl;
    return 0;
}

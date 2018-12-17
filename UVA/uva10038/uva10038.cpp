/*
    Solved!
    Time: 01:11:11 PM
    Date: 06-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll n, i, x, k, l;

    while(cin >> n){
        ll arr[n], flg = 0, y;
        l = n;
        k = 0;
        while(n--){
            cin >> x;
            if(flg == 0){
                flg = 1;
                y = x;
                continue;
            }
            arr[k++] = abs(x - y);
            y = x;
        }
        if(l == 1){
            cout << "Jolly" << endl;
            continue;
        }
        sort(arr, arr + k);
        for(i = 0; i < k; i++){
            if(arr[i] - 1 != i){
                cout << "Not jolly" << endl;
                break;
            }
            if(i == k - 1){
                cout << "Jolly" << endl;
            }
        }
    }
    
    return 0;
}

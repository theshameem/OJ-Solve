/*
    Solved!
    Time: 11:17:36 AM
    Date: 24-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);    

    ll n, i, j, k, cnt;

    while(cin >> n){
        ll arr[n];

        for(i = 0; i < n; i++){
            cin >> arr[i];
        }
        cnt = 0;
        for(i = 0; i < n; i++){
            for(j = i + 1; j < n; j++){
                if(arr[i] > arr[j]){
                    swap(arr[i], arr[j]);
                    i = -1;
                    ++cnt;
                    break;
                }
                ++i;
            }
        }
        cout << "Minimum exchange operations : " << cnt << endl;
    }
    
    return 0;
}

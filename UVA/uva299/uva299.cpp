/*
    Solved!
    Time: 03:41:12 AM
    Date: 13-08-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll tc, n, cnt, i, j;
    cin >> tc;

    while(tc--){
        cin >> n;
        ll arr[n];
        cnt = 0;
        for(i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(i = 0; i < n; i++){
            for(j = i + 1; j < n; j++){
                if(arr[i] > arr[j]){
                    ++cnt;
                    swap(arr[i], arr[j]);
                }
            }
        }
        printf("Optimal train swapping takes %lld swaps.\n", cnt);
    }
    
    return 0;
}

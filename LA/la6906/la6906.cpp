/*
    Solved!
    Time: 07:38:39 PM
    Date: 20-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int tc, n, k, i, cases = 0, cnt;
    cin >> tc;
    
    while(tc--){
        cnt = 1;
        cin >> n >> k;
        int arr[n], dif, dif2;
        
        for(i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        dif = abs(arr[0] - arr[1]);

        for(i = 1; i < n; i++){
            dif2 = abs(arr[i] - arr[i -  1]);
            if(dif2 <= k){
               continue;
            } else {
                ++cnt;
                dif = abs(arr[i] - arr[i -  1]);
            }
        }
        printf("Case #%d: %d\n", ++cases, cnt);
    }
    return 0;
}
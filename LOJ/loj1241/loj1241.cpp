/*
    Solved!
    Time: 01:31:38 AM
    Date: 20-05-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int t, n, cases = 0, cnt, i, max;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        int arr[n], max = 2, cnt = 0, rem = 0;

        for(i = 0; i < n; i++){
            scanf(" %d", &arr[i]);

            if(arr[i] > 2 && i == 0){
                if(arr[i] > 5){
                    cnt += arr[i] / 5;
                    rem = arr[i] % 5;
                    if(rem > 2) ++cnt;
                } else {
                    ++cnt;
                }
            }

            if(i > 0){
                if(arr[i] > arr[i - 1]){
                    if(arr[i] - arr[i - 1] > 5){
                        cnt += (arr[i] - arr[i - 1]) / 5;
                        rem = (arr[i] - arr[i - 1]) % 5;
                        if(rem >= 1) ++cnt;
                    } else {
                        ++cnt;
                    }
                }
            }
        }
        printf("Case %d: %d\n", ++cases, cnt);
    }

    return 0;
}
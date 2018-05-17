#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int t, n, cnt, cases = 0, i, j;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        cnt = 0;
        int arr[n];

        for(i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }

        for(i = 1; i < n; i++){
            if(arr[i] > arr[i - 1]){
                ++cnt;
            }
        }

        printf("Case %d: %d\n", ++cases, cnt);
    }

    return 0;
}
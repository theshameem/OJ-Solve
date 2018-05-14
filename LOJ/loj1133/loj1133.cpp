/*
    Solved!
    Time: 12:45:25 AM
    Date: 10-05-18
*/
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int t, cases = 0, n, m, d, k, y, z, i;
    char character;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &n, &m);
        int arr[n];

        for(i = 0; i < n; i++){
             scanf("%d", &arr[i]);
        }

        while(m--){
            scanf(" %c", &character);

            if(character == 'S'){
                scanf("%d", &d);
                for(i = 0; i < n; i++){
                    arr[i] += d;
                }
            } else if(character == 'M'){
                scanf("%d", &d);
                for(i = 0; i < n; i++){
                    arr[i] *= d;
                }
            } else if(character == 'D'){
                scanf("%d", &k);
                for(i = 0; i < n; i++){
                    arr[i] /= k;
                }
            } else if(character == 'R'){
                reverse(arr, arr + n);
            } else if(character == 'P') {
                scanf("%d %d", &y, &z);
                swap(arr[y], arr[z]);
            }
        }

        printf("Case %d:\n", ++cases);
        for(i = 0; i < n; i++){
            if(i == n - 1){
                printf("%d\n", arr[i]);    
            } else {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}
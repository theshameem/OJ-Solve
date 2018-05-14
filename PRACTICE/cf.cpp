/*
    Solved!
    Time: 04:43:23 PM
    Date: 13-05-18
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int n, i, j, copy, co = 0, k = 0;
    scanf("%d", &n);

    int arr[n];
    int cpy[n];

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        copy = arr[i];
        for(j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                copy = arr[j];
                arr[i] = -1;
                co++;
            }
        }
    }

    for(i = 0; i < n; i++){
        if(arr[i] != -1 ){
            cpy[k++] = arr[i];
        }
    }
    printf("%d\n", k);
    for(i = 0; i < k; i++){
        if(i == k - 1){
            printf("%d\n", cpy[i]);
        } else {
            printf("%d ", cpy[i]);
        }
    }

    return 0;
}
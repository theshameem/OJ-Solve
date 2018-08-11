/*
    Solved!
    Time: 09:11:02 PM
    Date: 01-06-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k, i, j, sum = 0;
    scanf("%d %d", &n, &k);

    int arr[n];

    for(i = 0; i < n; i++){
       scanf("%d ", &arr[i]);
    }
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                arr[j] = -1;
            }
        }
    }

    for(i = 0; i < n; i++){
        if(arr[i] != -1){
            ++sum;
        }
    }
    int cnt = 1;
    if(sum >= k){
        printf("YES\n");
        for(i = 0; i < n; i++){
            if(arr[i] != -1){
                if(cnt == k){
                    printf("%d\n", i + 1);
                    return 0;
                } else {
                    printf("%d ", i + 1);
                    ++cnt;   
                }
                
            }
        }
    } else {
        printf("NO\n");
    }
    return 0;
}

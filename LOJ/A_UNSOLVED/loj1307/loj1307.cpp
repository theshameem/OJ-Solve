/*
    See you tomorrow.
*/
#include <bits/stdc++.h>
using namespace std;
  
int numberOfTriangles(int arr[], int n);
  
int main() { 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int tc, i, j, n, cases = 0;
    scanf("%d", &tc);
    
    while(tc--){
        scanf("%d", &n);
        int arr[n];
        for(i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + n);
        int res = numberOfTriangles(arr, n);
        printf("Case %d: %d\n", ++cases, res);
    }
    return 0; 
}
int numberOfTriangles(int arr[], int n) { 
    int cnt = 0, k, i, j, res; 
    for (i = 0; i < n - 2; i++) { 
        k = i + 2; 
        for (j = i + 1; j < n; j++){ 
            res = arr[i] + arr[j];
            while (k < n && res > arr[k]){
                ++k;
            } 
            if(k > j) {
                cout << j << " " << k << endl;
                cnt += (k - j - 1);
            }
        } 
    } 
    return cnt; 
} 
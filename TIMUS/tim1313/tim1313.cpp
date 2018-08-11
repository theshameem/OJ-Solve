/*
    Solved!
    Time: 06:04:01 PM
    Date: 31-05-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, i, j, flag = 0, l = 0, k = 0, n, m, x, y;
    scanf("%d", &t);

    int arr[t][t];
    int res[t * t];

    for(i = 0; i < t; i++){
        for(j = 0; j < t; j++){
            scanf("%d ", &arr[i][j]);
        }
    }
    x = 1;
    y = t - 1;
    for(m = 0; m < t; m++){
        if(m == 0){
            for(i = m; i < t; i++){
                l = m;
                for(j = i; j >= m; j--){
                    res[k++] = arr[j][l++];
                }
            }
        } else {
            l = m;
            for(i = y; i >= m; i--){
                res[k++] = arr[i][l++];
            }
            ++x;
        }       
    }

    for(i = 0; i < k; i++){
        if(i == k - 1) printf("%d\n", res[i]);
        else printf("%d ", res[i]);
    }

    return 0;
}
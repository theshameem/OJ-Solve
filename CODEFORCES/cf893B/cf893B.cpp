/*
    Solved!
    Time: 05:56:41 PM
    Date: 12-05-18
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, ans, i, j, flag = 0;
    scanf("%d", &n);

    int arr[8] = {32640, 8128, 2016, 496, 120, 28, 6, 1};

    for(i = 0; i < 8; i++){
        if(n >= arr[i]){
            for(j = i; j < 8; j++){
                if(n % arr[j] == 0){
                    ans = arr[j];
                    flag = 1;
                    break;
                }
            }
        }
        if(flag) break;
    }

    printf("%d\n", ans);

    return 0;
}

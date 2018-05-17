/*
    Solved!
    Time: 10:39:21 PM
    Date: 15-05-18
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, flag = 0, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + n);

    printf("%d\n", arr[(n - 1) / 2]);
    

    return 0;
}
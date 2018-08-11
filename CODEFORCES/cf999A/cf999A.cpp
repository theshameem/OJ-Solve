/*
    Solved!
    Time: 10:25:28 PM
    Date: 21-06-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k, i, idx = 0, cnt = 0;
    scanf("%d %d", &n, &k);
    int arr[n];

    for(i = 0; i < n; i++){
        scanf(" %d", &arr[i]);
    }
    int t = n;
    while(1){
        if(arr[idx] <= k && cnt < t){
            ++cnt;
            ++idx;
        } else if (arr[n - 1] <= k && cnt < t){
            ++cnt;
            --n;
        } else {
            printf("%d\n", cnt);
            break;
        }
    }

    return 0;
}
/*
    Solved!
    Time: 05:48:27 PM
    Date: 01-06-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int long long i, n, k = 99999, max;
    int long long arr[k];

    k /= 2;
    arr[0] = 0;
    arr[1] = 1;

    for(i = 1; i <= k; i++){
        arr[2 * i] = arr[i];
        arr[2 * i + 1] = arr[i] + arr[i + 1];
    }

    while(1){
        scanf("%lld", &n);
        if(n == 0) break;

        max = arr[0];
        
        for(i = 1; i <= n; i++){
            if(arr[i] > max) max = arr[i];
        } 
        printf("%lld\n", max);
    }

    return 0;
}

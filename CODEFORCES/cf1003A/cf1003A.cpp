/*
    Solved!
    Date: 03-17-18
    Time: 08:49:39 PM
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, i, j;

    cin >> n;
    int arr[n];

    for(i = 0; i < n; i++){
        scanf(" %d", &arr[i]);
    }
    int cnt = 1, max = 0;
    for(i = 0; i < n; i++){
        if(arr[i] != 0){
            cnt = 1;
            for(j = i + 1; j < n; j++){
                if(arr[i] == arr[j]){
                    ++cnt;
                    arr[j] = 0;
                }
            }
        }
        if(cnt > max) max = cnt;
    }
    cout << max << endl;

    return 0;
}
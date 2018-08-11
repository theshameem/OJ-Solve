#include <bits/stdc++.h>
using namespace std;

void rev(int i, int n, int arr[]){
    if(i < n){
        rev(i + 1, n, arr);
        cout << arr[i] << " ";
    }
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, i, j, k = 0;
    cin >> n;
    int arr[n];

    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    rev(k, n, arr);

    return 0;
}
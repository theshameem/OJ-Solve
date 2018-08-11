/*
    Solved!
    Time: 07:48:49 PM
    Date: 30-07-18
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, i, j, val = 1, l, k;

    scanf("%d", &n);
    int res[n][n];

    k = n;
    for(i = 1; i <= n; i++){
        l = --k;
        for(j = 0; j < i; j++){
            res[j][l++] = val++;
        }
    }

    l = 1, k = 1;
    for(i = n - 1; i >= 0; i--){
        for(j = 0; j < i; j++){
            res[l++][j] = val++;
        }
        l = ++k;
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
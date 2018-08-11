/*
    Unsolved!
    contest date: 01-07-18
    codeforces A
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int n, total = 0, i, j = 0;
    cin >> n;
    int arr[n];

    for(i = 0; i < n; i++){
        cin >> arr[i];
        total += arr[i];
    }

    if(n == 1){
        cout << -1 << endl;
        return 0;
    } else if (n == 2 && arr[0] == arr[1]){
        cout << -1 << endl;
        return 0;
    } else {
        sort(arr, arr + n);
        int cpy = 0, t = 0, k, g = n, a = 0;
        int res[n];
        for(i = n - 1; i >= 0; i--){
            ++j;
            res[t++] = arr[i];
            cpy += arr[i];
            total -= arr[i];
            --g;
            ++a;

            if(cpy != total && cpy > 0 && total > 0 && g > 0 && a > 0){
                cout << j << endl;
                for(k = 0; k < j; k++){
                    if(k == j - 1){
                        cout << res[k] << endl;
                        return 0;
                    } else {
                        printf("%d ", res[k]);
                    }
                }
            }
        }
    }
    cout << -1 << endl;

    return 0;
}
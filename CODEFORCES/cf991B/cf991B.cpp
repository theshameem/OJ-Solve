/*
    Solved!
    Time: 10:37:25 PM
    Date: 13-06-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, i, j, cnt = 0;
    cin >> n;
    double arr[n], total = 0, avg;

    for(i = 0; i < n; i++){
        scanf(" %lf", &arr[i]);
        total += arr[i];
    }

    avg = round(total / n);
    //cout << avg << endl;

    if(avg >= 4.50) cout << 0 << endl;
    else {
        sort(arr, arr + n);

        for(i = 0; i < n; i++){
            if(arr[i] < 5){
                ++cnt;
                total += (5 - arr[i]);
                if((total / n) >= 4.5){
                    cout << cnt << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
/*
    Solved!
    Time: 08:48:16 PM
    Date: 19-05-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int long long n, i, sum = 0;

    cin >> n;

    int long long arr[n];

    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(i = 0; i < n; i++){
        if(arr[i] > arr[i + 1]){
            sum += (abs(arr[i] - arr[i + 1]));
        }
    }

    cout << sum << endl;

    return 0;
}
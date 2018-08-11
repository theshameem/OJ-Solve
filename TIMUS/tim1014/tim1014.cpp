/*
    Solved!
    Time: 06:01:14 PM
    Date: 20-05-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int long long n, i, k = 0, mul = 1, cpy;
    int long long arr[100];

    cin >> n;
    cpy = n;

    if(n == 0){
        cout << 10 << endl;
        return 0;
    } else if (n == 1){
        cout << 1 << endl;
        return 0;
    }

    for(i = 9; i > 1; i--){
        if(n % i == 0){
            while(n % i == 0){
                arr[k++] = i;
                n /= i;
            }
        }

        if(n <= 1) break;
    }

    for(i = 0; i < k; i++){
        mul *= arr[i];
    }

    if(mul == cpy){
        sort(arr, arr + k);
        for(i = 0; i < k; i++){
            cout << arr[i];
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
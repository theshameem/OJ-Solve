/*
    Solved!
    Time: 03:36:37 PM
    Date: 14-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, a, b, i, sum = 0;

    scanf("%lld %lld %lld", &n, &a, &b);
    ll res, arr[n];

    for(i = 0; i < n; i++){
        scanf(" %lld", &arr[i]);
    }
    sum = a * arr[0];
    res = a * arr[0];

    for(i = 1; i < n; i++){
        sum = max(a * arr[i], sum + arr[i] * a);
        res = max(sum, res);
    }
    cout << res + b << endl;
    return 0;
}
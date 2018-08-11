/*
    Solved!
    Date: 10-10-18
    Time: 01:56:21 AM
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n, flag = 0, i;
    cin >> n;

    ll arr[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    for(i = 0; i < 14; i++){
        if(n % arr[i] == 0){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}
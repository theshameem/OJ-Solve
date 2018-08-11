/*
    Solved!
    Time: 12:11:40 AM
    Date: 12-07-18
*/
#include <bits/stdc++.h>
#include <algorithm>
typedef long long int ll;
using namespace std;
ll res[100];
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, m, i, j, k = 0;

    cin >> n >> m;
    ll seq[n];
    ll fing[m];

    for(i = 0; i < n; i++) cin >> seq[i];

    for(i = 0; i < m; i++){
        cin >> fing[i];
        for(j = 0; j < n; j++){
            if(fing[i] == seq[j]){
                res[j] = 1;
                break;
            }
        }
    }

    for(i = 0; i < n; i++){
        if(res[i] == 1 && i == k - 1){
            cout << seq[i] << endl;
        } else if (res[i] == 1){
            cout << seq[i] << " ";
        }
    }

    return 0;
}

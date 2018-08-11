/*
    Solved!
    Time: 02:27:34 PM
    Date: 07-07-18
*/
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, total_ballons = 0, i, j, gri = 0, andrew = 0, k = 0;

    cin >> n;
    ll arr[n];
    ll pack[n];

    for(i = 0; i < n; i++){
        cin >> arr[i];
        total_ballons += arr[i];
    }
    //sort(arr, arr + n);

    if(n == 1 || (n == 2 && arr[0] == arr[1])){
        cout << -1 << endl;
        return 0;
    }
    
    andrew = n;
    for(i = 0; i < n; i++){
        pack[k++] = i + 1;
        total_ballons -= arr[i];
        gri += arr[i];
        andrew--;

        if(andrew && gri && total_ballons != gri){
            cout << k << endl;
            for(j = 0; j < k; j++){
                if(j == k - 1){
                    cout << pack[j] << endl;
                } else {
                    cout << pack[j] << " " << endl;
                }
            }
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}
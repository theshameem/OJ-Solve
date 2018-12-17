/*
    Solved!
    Time: 07:47:10 PM
    Date: 23-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, ans = 0, x;
    cin >> n;

    for(ll i = 0; i < n; i++){
        cin >> x;
        if(x == 1){
            ans = 1;
        }
    }

    if(ans == 1){
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }

    return 0;
}

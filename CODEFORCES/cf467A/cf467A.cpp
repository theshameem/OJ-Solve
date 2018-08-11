/*
    Solved!
    Time: 12:45:46 AM
    Date: 11-07-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, cnt = 0, i;
    cin >> n;
    ll people[n];
    ll seat[n];

    for(i = 0; i < n; i++){
        cin >> people[i] >> seat[i];
        if(seat[i] - people[i] >= 2){
            ++cnt;
        }
    }

    cout << cnt << endl;
    return 0;
}

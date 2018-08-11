/*
    Solved!
    Time: 12:40:11 AM
    Date: 12-07-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, i, j, cnt = 0, max;
    cin >> n;
    ll in[n];
    ll out[n];

    for(i = 0; i < n; i++){
        cin >> out[i] >> in[i];
        if(i == 0){
            cnt += in[i];
            max = in[i];
        } else {
            cnt -= out[i];
            cnt += in[i];

            if(cnt > max) max = cnt;
        }
    }
    cout << max << endl;

    return 0;
}

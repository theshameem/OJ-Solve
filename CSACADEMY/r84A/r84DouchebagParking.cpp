/*
    Solved!
    Time: 09:35:13 PM
    Date: 07-07-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll idx, n, w, i, j, k = 0, cnt = 0;
    cin >> n >> w;
    ll wid[n];
    ll free[n];
    ll res[n];

    for(i = 0; i < n; i++){
        cin >> free[i] >> wid[i];
    }

    for(i = 0; i < n; i++){
        idx = i;
        cnt = 0;
        while(free[i] == 1){
            cnt += wid[i];
            if(cnt >= w){
                res[k++] = idx;
            }
            ++i;
        }
    }
    if(k) cout << res[0] + 1 << endl;
    else cout << -1 << endl;
    return 0;
}

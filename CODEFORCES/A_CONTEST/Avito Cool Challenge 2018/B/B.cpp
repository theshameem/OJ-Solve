/*
    Unsolved!
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll cnt = 0, n, i, j, m, x = 0;
    cin >> n;

    ll arr[n];
    map <ll, ll> mp;
    map <ll, ll> :: iterator it;

    for(i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    for(it = mp.begin(); it != mp.end(); it++){
        x += it->second;
    }

    //Check whether the output is "Impossible" or not.
    for(i = 0; i < n; i++){
        m = arr[i];
        for(it = mp.begin(); it != mp.end(); it++){
            if(it->first == m){
                if(m == (x - it->second)){
                    break;
                } else {
                    cout << "Impossible" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Possible" << endl;
    ll res[n], k = 0;
    cnt = 1;
    for(i = 0; i < n; i++){
        if(arr[i] == -1)    continue;
        m = arr[i];
        res[i] = cnt;
        for(j = i + 1; j < n; j++){
            if(m == arr[j]){
                res[j] = cnt;
                arr[j] = -1;
            }
        }
        ++cnt;
    }
    for(i = 0; i < n; i++){
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}

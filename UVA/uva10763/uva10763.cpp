/*
    Solved!
    Time: 08:16:17 PM
    Date: 16-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll n, i, j, flag, val, x, y;

    while(cin >> n){
        if(n == 0)  break;
        flag = 1;
        
        map< pair<ll, ll >, ll > mp;
        map< pair<ll, ll >, ll > :: iterator it; 
        pair<ll, ll> tmp; 

        for(i = 0; i < n; i++){
            cin >> x >> y;
            pair<ll, ll> p = make_pair(x, y);
            mp[p]++;
        }
        for(it = mp.begin(); it != mp.end(); it++){
            tmp = it->first;
            swap(tmp.first, tmp.second);

            if(mp[tmp] != mp[it->first]){
                flag = 0;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

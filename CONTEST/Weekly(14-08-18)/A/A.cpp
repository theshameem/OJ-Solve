/*
    AC
*/
#include <bits/stdc++.h>
#include <algorithm>
typedef long long int ll;
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, r, i, j, x;
    cin >> n;
    j = n;
    map<ll, ll> mp;
    map<ll, ll> :: iterator it;
    while(n--){
        
        cin >> r;
        while(r--){
            cin >> x;
            mp[x]++;
        }
    }
    for(it = mp.begin(); it != mp.end(); it++){
        if(it->second == j){
            cout << it->first << " ";
        }
    }
    cout << endl;

    return 0;
}

/*
    Solved!
    Time: 05:12:13 PM
    Date: 08-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, x, i, max = 0, res = 0;
    cin >> n;
    map <ll, ll> arr;
    map <ll, ll> :: iterator it;
    for(i = 0; i < n; i++){
       cin >> x;
       arr[x]++;
    }
       
    for(it = arr.begin(); it != arr.end(); it++){
       if(it->second > 1){
           res += (it->second - 1);
       }
   }
   cout << res << endl;

    return 0;
}

/*
    Solved!
    Time: 06:10:11 PM
    Date: 24-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector <ll> v1, v2;
ll total = 0, dif, n;

void subset(ll pos){
    if(pos == n){
        ll res = 0;
        for(ll i = 0; i < v2.size(); i++) {
            res += v2[i];
        }
        ll pile1 = res, pile2 = abs(total - pile1);
        if(abs(pile1 - pile2) < dif)    dif = abs(pile1 - pile2);
        return;
    }
    subset(pos + 1);
    v2.push_back(v1[pos]);
    subset(pos + 1);
    v2.pop_back();
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll x;
    cin >> n;
    
    for(ll i = 0; i < n; i++){
        cin >> x;
        v1.push_back(x);
        total += x;
    }
    dif = total + 1;
    subset(0);
    cout << dif << endl;
    return 0;
}
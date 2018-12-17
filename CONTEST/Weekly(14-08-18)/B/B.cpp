/*
    This is TLE approach. See you later
*/
#include <bits/stdc++.h>
#include <algorithm>
typedef long long int ll;
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, m, mx, start, val, res = 0, i, j;

    cin >> n >> m;

    mx = (n * n) + (n * n);
    start = n;
    //cout << mx << endl;
    map<ll, ll> mp;
    map<ll, ll> :: iterator it;

    while(start <= mx){
        ll sq = sqrt(start);
        //cout << sq << endl;
        for(i = 1; i <= sq; i++){
            for(j = i; j <= sq; j++){
                val = (i * i) + (j * j);
                if(val > mx)    break;
                if(val % m == 0) {
                    cout << i << " " << j << endl;
                    ++res;
                }
            }
        }
        start += m;
    }
    cout << res << endl;
    
    return 0;
}

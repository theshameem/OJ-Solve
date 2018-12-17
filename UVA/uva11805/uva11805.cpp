/*
    Solved!
    Time: 04:58:53 PM
    Date: 17-08-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll tc, cases = 0, i, j, n, k, p, res;
    cin >> tc;

    while(tc--){
        cin >> n >> k >> p;

        res = (p % n) + k;
        if(res > n) res %= n;
        if(res == 0) res = k;

        printf("Case %lld: %lld\n", ++cases, res);
    }
    
    return 0;
}

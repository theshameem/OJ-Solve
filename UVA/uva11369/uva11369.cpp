/*
    Solved!
    Time: 10:47:19 AM
    Date: 25-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);    

    ll tc, n, i, j, res;

    cin >> tc;

    while(tc--){
        cin >> n;
        ll costs[n];

        for(i = 0; i < n; i++){
            cin >> costs[i];
        }
        sort(costs, costs + n);
        i = n % 3;
        res = 0;
        for(; i < n; i += 3){
            res += costs[i];
        }
        cout << res << endl;
    }
    
    return 0;
}

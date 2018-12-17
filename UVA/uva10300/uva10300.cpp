/*
    Solved!
    Time: 08:34:26 PM
    Date: 19-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll tc, size, n, animal, environment, ans;
    cin >> tc;

    while(tc--){
        cin >> n;
        ans = 0;
        for(ll i = 0; i < n; i++){
            cin >> size >> animal >> environment;
            ans += (size * environment);
        }
        cout << ans << endl;
    }
    
    return 0;
}

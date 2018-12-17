/*
    Solved!
    Time: 04:08:09 AM
    Date: 13-08-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll tc, n, m, cnt;
    cin >> tc;

    while(tc--){
        cin >> n >> m;
        cnt = 0;
        while(n > 1){
            n -= (m - 1);
            ++cnt;
        }
        if(n == 1){
            cout << cnt << endl;
        } else {
            cout << "cannot do this\n";
        }
    }
    
    return 0;
}

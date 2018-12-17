/*
    Solved!
    Time: 09:00:09 PM
    Date: 20-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, i, cnt = 0, x, y;

    cin >> n;

    for(i = 1; i <= n; i++){
        cin >> x >> y;

        if(x + y > cnt){
            cnt = x + y;
        }
    }
    cout << cnt << endl;

    return 0;
}

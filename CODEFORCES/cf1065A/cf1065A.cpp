/*
    Solved!
    Time: 9:40:41 PM
    Date: 11-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll tc, i, s, a, b, c, buy, ex;
    cin >> tc;

    while(tc--){
        cin >> s >> a >> b >> c;

        buy = s / c;
        buy += ((s / c) / a) * b;

        cout << buy << endl;
    }

    return 0;
}

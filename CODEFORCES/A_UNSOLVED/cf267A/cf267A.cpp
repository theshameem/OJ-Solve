#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int long long t, a, b, cnt, x, y;
    cin >> t;

    while(t--){
        cin >> a >> b;

        x = max(a, b);
        y = min(a, b);

        if(x % 2) --x;
        if(y % 2) y;

        cnt =  x / y;

        cout << cnt << endl;
    }
}
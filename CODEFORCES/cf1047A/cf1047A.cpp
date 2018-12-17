/*
    Solved!
    Time: 08:43:44 PM
    Date: 20-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, a = 1, b = 1, c;

    cin >> n;

    c = n - 2;

    if(c % 3 == 0){
        --c;
        ++a;
    }

    cout << a << " " << b << " " << c << endl;

    return 0;
}

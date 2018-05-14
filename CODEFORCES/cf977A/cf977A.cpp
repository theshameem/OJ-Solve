/*
    Solved!
    Time: 09:15:06 PM
    Date: 06-05-18
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int long long n, t;

    cin >> n;
    cin >> t;

    while(t--){
        if(n % 10 != 0){
            --n;
        } else {
            n /= 10;
        }
    }

    cout << n << endl;

    return 0;
}
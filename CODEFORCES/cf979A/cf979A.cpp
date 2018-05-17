/*
    Solved!
    Time: 10:22:24 PM
    Date: 14-05-18
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int long long n;

    cin >> n;

    if(n == 0){
        cout << n << endl;
        return 0;
    }

    n++;

    if(n % 2 == 0) n /= 2;

    cout << n << endl;

    return 0;
}
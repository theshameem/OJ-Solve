/*
    Solved!
    Time: 11:43:14 PM
    Date: 16-05-18
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int long long n, m;

    cin >> n >> m;

    if(n % 2 == 0){
        if(m > (n / 2)){
            m -= (n / 2);
            cout << m * 2 << endl;
        } else {
            cout << (m * 2) - 1 << endl;
        }
    } else {
        if(m > (n / 2)){
            if(m == (n / 2) + 1){
                cout << n << endl;
            } else if(m > (n / 2) + 1) {
                m -= ((n / 2) + 1);
                cout << (m * 2) << endl;
            }
        } else {
            cout << (m * 2) - 1 << endl;
        }
    }

    return 0;
}

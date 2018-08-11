/*
    Solved!
    Time: 9:34:08 PM
    Date: 13-07-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char str[500];
    cin >> str;

    ll len = strlen(str);

    ll i, j, k, res = 1;
    for(i = 0; i < len; i++){
        if(str[i] == 'n'){
            continue;
        } else if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'){
            if(str[i + 1] == 'a' || str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'o' || str[i + 1] == 'u'){
                continue;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;

    return 0;
}

/*
    Solved!
    Time: 03:44:41 AM
    Date: 10-07-18
*/
#include <bits/stdc++.h>
using namespace std;
#define ll int long long

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char str[50];

    cin >> str;

    ll len, cnt = 0, i;
    len = strlen(str);

    for(i = 0; i < len; i++){
        if(str[i] == '4' || str[i] == '7') ++cnt;
    }
    if((cnt == 4 || cnt == 7) && cnt > 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
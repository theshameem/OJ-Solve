/*
    Solved!
    Time: 12:05:19 AM
    Date: 11-07-18
*/
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
typedef long long int ll;
using namespace std;
char rev[500];

void reversed(string str, ll len){
    ll i, k = 0;
    for(i = len - 1; i >= 0; i--){
        rev[k++] = str[i];
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char str[500], cstr[500];
    cin >> str;
    cin >> cstr;
    ll l = strlen(cstr);
    reversed(cstr, l);

    if(strcmp(str, rev) == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
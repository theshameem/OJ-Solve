/*
    Solved!
    Time: 10:41:40 AM
    Date: 15-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    char s[1000];
    scanf(" %[^\n]", s);

    ll i, k = 0, len, flg = 0, r = 1;
    char res[1000];
    len = strlen(s);
    
    for(i = 0; i < len; i++){
        if(flg == 0 && s[i] == 32){
            continue;
        } else {
            flg = 1;
        }

        if(s[i] >= 48 && s[i] <= 57){
            res[k++] = s[i];
        } else {
            cout << "invalid input" << endl;
            return 0;
        }
    }
    i = 0;
    while(res[i] == '0'){
        ++i;
    }
    if(i - k == 0){
        cout << 0 << endl;
        return 0;
    }
    flg = 0;
    for(i = 0; i < k; i++){
        if(flg == 0 && res[i] == '0'){
            continue;
        } else {
            flg = 1;
        }
        cout << res[i];
    }
    cout << endl;

    return 0;
}

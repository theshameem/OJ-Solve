/*
    Solved!
    Time: 10:10:10 AM
    Date: 06-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll t, len;
    cin >> t;
    string s;
    while(t--){
        cin >> s;

        len = s.size();
        if(((s[len - 1] == '1' || s[len - 1] == '4') && len == 1) || (s[len - 1] == '8' && s[len - 2] == '7' && len == 2)){
            cout << "+" << endl;
        } else if (s[len - 1] == '5' && s[len - 2] == '3'){
            cout << "-" << endl;
        } else if ((s[0] == '9' && s[len - 1] == '4') || (s[0] == '9' && len == 1)){
            cout << "*" << endl;
        } else {
            cout << "?" << endl;
        }
    }
    
    return 0;
}

/*
    Solved!
    Time: 02:40:42 AM
    Date: 13-08-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll len1, len2, i, j, res;
    string s, t;

    while(cin >> s >> t){
        len1 = s.size();
        len2 = t.size();
        j = 0, res = 0;
        for(i = 0; i < len1; i++){
            for(; j < len2; j++){
                if(s[i] == t[j]){
                    s[i] = '1';
                    ++j;
                    break;
                }
            }
        }
        if(s[len1 - 1] == '1'){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}

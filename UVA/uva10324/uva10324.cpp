/*
    Solved!
    Time: 11:12:13 AM
    Date: 06-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    string s;
    ll t, res, len, i, j, cpy, cpy2, k, cases = 0;
    
    while(cin >> s && s != "\n"){
        len = s.size();
        cin >> t;
        printf("Case %lld:\n", ++cases);
        while(t--){
            cin >> i >> j;
            cpy = min(i, j);
            cpy2 = max(i, j);
            i = cpy;
            j = cpy2;
            for(k = i; k <= j; k++){
                if(s[k] != s[k + 1] && j - i > 1){
                    cout << "No" << endl;
                    break;
                }

                if(k == j - 1 || k == j){
                    cout << "Yes" << endl;
                    break;
                }
            }
        }
    }
    
    return 0;
}

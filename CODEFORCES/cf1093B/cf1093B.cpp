/*
    Solved!
    Time: 09:47:13 PM
    Date: 15-12-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int tc;
    cin >> tc;

    while(tc--){
        string str;
        cin >> str;
        
        int len = str.size();
        sort(str.begin(), str.end());

        if(str[0] == str[len - 1]){
            cout << "-1" << endl;
        } else {
            cout << str << endl;
        }
    }

    return 0;
}

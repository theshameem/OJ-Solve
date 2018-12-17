/*
    Solved!
    Time: 12:22:23 PM
    Date: 06-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    string s;
    ll len, i;

    while(cin >> s){
        len = s.size();

        for(i = 0; i < len; i++){
            printf("%c", s[i] - 7);
        }
        cout << endl;
    }
    
    return 0;
}

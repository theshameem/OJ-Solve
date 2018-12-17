/*
    Solved!
    Time: 08:12:00 AM
    Date: 21-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void bt(int n, int m, int h, string str){
    if(str.size() == n){
        cout << str << endl;
        return;
    }

    if(m - 1 >= 0){
        bt(n, m - 1, h, str + "0");
    }
    if(h - 1 >= 0){
        bt(n, m, h - 1, str + "1");
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    int tc, n, h, cases = 0;
    cin >> tc;

    while(tc--){
        if(cases > 0)   cout << endl;
        cin >> n >> h;
        string str;
        bt(n, n - h, h, str);
    }
    
    return 0;
}

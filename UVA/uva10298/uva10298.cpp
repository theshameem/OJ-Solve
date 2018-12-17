/*
    Can't understand the problem clearly.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    string s;

    while(cin >> s && s != "."){
        ll len = s.size(), i, maxm = 0;
        map<char, ll> cnt;
        map<char, ll> :: iterator it;

        for(i = 0; i < len; i++){
            cnt[s[i]]++;
        }

        for(it = cnt.begin(); it != cnt.end(); it++){
            if(it->second > maxm){
                maxm = it->second;
            }
        }
        cout << maxm << endl;
    }
    
    return 0;
}

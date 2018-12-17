/*
    Solved!
    Time: 04:12:13 PM
    Date: 22-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fact(ll m);
void res(string s, ll n);
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);   
    ll tc, n;

    cin >> tc;

    while(tc--){
        string str;
        cin >> str >> n;
        ++n;
        sort(str.begin(), str.end());
        res(str, n);
    }
    
    return 0;
}

void res(string s, ll n){
    ll x, len, in_each_sector, con;
    string ans;
    len = s.size();
    con = len;
    
    while(con--){
        len = s.size();
        in_each_sector = fact((len - 1));
        x = ceil((n * 1.0) / in_each_sector);
        ans.push_back(s[x - 1]);
        s.erase(s.begin() + (x - 1));
        n -= (in_each_sector * (x - 1));
    }
    cout << ans << endl;
}

ll fact(ll m){
    ll total = 1;
    for(ll i = 1; i <= m; i++){
        total *= i;
    }
    return total;
}

#include <bits/stdc++.h>
#include <algorithm>
typedef long long int ll;
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, m,  q, i, cnt, j, fa, la, k;
    cin >> n >> m >> q;

    char s[n];
    char t[m];

    cin >> s >> t;

    for(i = 0; i < q; i++){
        cin >> fa >> la;
        ll res = 0;
        
        for(j = fa - 1; j < la; j++){
            cnt = 0;
            for(k = 0; k < m; k++){
                if(t[k] == s[j] && j < la){
                    ++cnt;
                    ++j;
                } else {
                    break;
                }

                if(cnt == m){
                    ++res;
                    break;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, m, q, start, end, x, res, cnt, i, j, k;
    cin >> n >> m >> q;
    string s, t;
    cin >> s >> t;

    while(q--){
        cin >> start >> end;
        cnt = 0;
        for(i = start - 1; i < end; i++){
            k = 0;
            string r;
            x = 0;
            j = i;
            while(x < m && j < end){
                r += s[j];
                ++j;
                x++;
            }
            if(r == t){
                ++cnt;
                //i += j - 1;
            }
            cout << r << endl;
        }
        cout << cnt << endl;
    }
    return 0;
}
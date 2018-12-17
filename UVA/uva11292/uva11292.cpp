/*
    Solved!
    Time: 10:12: 41 PM
    Date: 27-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);    

    ll x, y, i, j;

    while(cin >> x >> y, x != 0 && y != 0){
        ll dra_head[x], kni_head[y], res = 0, cnt = 0;

        for(i = 0; i < x; i++){
            cin >> dra_head[i];
        }
        for(i = 0; i < y; i++){
            cin >> kni_head[i];
        }
        if(x > y){
            cout << "Loowater is doomed!" << endl;
            continue;
        }
        sort(dra_head, dra_head + x);
        sort(kni_head, kni_head + y);
        ll m = 0;
        for(i = 0; i < x; i++){
            for(j = m; j < y; j++){
                if(kni_head[j] >= dra_head[i]){
                    ++cnt;
                    res += kni_head[j];
                    ++m;
                    break;
                }
                ++m;
            }
        }
        if(cnt == x){
            cout << res << endl;
        } else {
            cout << "Loowater is doomed!" << endl;
        }
    }
    
    return 0;
}

/*
    Solved!
    Time: 08:13:41 PM
    Date: 19-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll n, b, h, w, prev, flg, i, j, cost, per_cost, availabe_bed;

    while(cin >> n >> b >> h >> w){
        flg = 0;
        for(i = 0; i < h; i++){
            cin >> per_cost;
            for(j = 0; j < w; j++){
                cin >> availabe_bed;
                if(availabe_bed >= n){
                    cost = (n * per_cost);
                    if(!flg){
                        flg = 1;
                        prev = cost;
                        continue;
                    }
                    if(cost > prev){
                        cost = prev;
                    } else {
                        prev = cost;
                    }
                }
            }
        }
        if(flg == 1 && cost <= b){
            cout << cost << endl;
        } else {
            cout << "stay home" << endl;
        }
    }
    
    return 0;
}

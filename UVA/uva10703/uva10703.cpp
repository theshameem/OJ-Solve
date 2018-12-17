/*
    Solved!
    Time: 09:30:21 PM
    Date: 25-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll w, h, n, i, j, l, cnt, res, x1, y1, x2, y2,X1, X2, Y1, Y2;
        
    while(cin >> w >> h >> n){
        if(w == 0 && h == 0 && n == 0)  break;
        
        bool flag[w][h];
        memset(flag, true, sizeof(flag));
        cnt = 0;
        for(i = 0; i < n; i++){
            cin >> x1 >> y1 >> x2 >> y2;
            X1 = min(x1, x2);
            X2 = max(x1, x2);
            Y1 = min(y1, y2);
            Y2 = max(y1, y2);
            
            for(j = X1 - 1; j < X2; j++){
                for(l = Y1 - 1; l < Y2; l++){
                    if(flag[j][l]){
                        ++cnt;
                        flag[j][l] = false;
                    }
                }
            }
        }
        res = abs((w * h) - cnt);
        if(res == 0){
            printf("There is no empty spots.\n");
        } else if (res == 1){
            printf("There is one empty spot.\n");
        } else {
            printf("There are %lld empty spots.\n", res);
        }
    }
    
    return 0;
}

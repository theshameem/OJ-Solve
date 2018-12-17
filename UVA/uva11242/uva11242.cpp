/*
    Solved!
    Time: 01:17:12 PM
    Date: 25-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll teeth_r, teeth_f, i, j, k;

    while(cin >> teeth_r, teeth_r != 0){
        cin >> teeth_f;
        double tmp, res, rear_teeths[teeth_r], front_teeths[teeth_f], ratio[teeth_r * teeth_f];

        for(i = 0; i < teeth_r; i++){
            cin >> rear_teeths[i];
        }
        for(i = 0; i < teeth_f; i++){
            cin >> front_teeths[i];
        }
        k = 0;
        for(i = 0; i < teeth_r; i++){
            for(j = 0; j < teeth_f; j++){
                ratio[k++] = rear_teeths[i] / front_teeths[j];
            }
        }
        res = 0;
        sort(ratio, ratio + k);
        for(i = k - 1; i > 0; i--){
            tmp = ratio[i] / ratio[i - 1];
            if(tmp > res)   res = tmp;
        }
        printf("%.2lf\n", res);
    }    
    
    return 0;
}

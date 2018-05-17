/*
    Solved!
    Time: 05-02:11 PM
    Date: 17-05-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int long long y, row, col, t, n, cases = 0, squ;

    scanf("%lld", &t);

    while(t--){
        scanf(" %lld", &n);

        squ = sqrt(n);

        if((squ * squ) < n){
            squ++;
        }

        if(squ % 2){
            y = n - ((squ - 1) * (squ - 1));

            if(squ < y){
                col = squ;
                row = 1 + (squ * squ) - n;
            } else {
                col = y;
                row = squ;
            }
        } else {
            y = n - ((squ - 1) * (squ - 1));

            if(squ < y){
                col = 1 + (squ * squ) - n;
                row = squ;
            } else {
                col = squ;
                row = y;
            }
        }
        
        printf("Case %lld: %lld %lld\n", ++cases, row, col);  
    }
    
    return 0;
}
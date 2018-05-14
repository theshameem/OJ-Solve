/*
    Solved!
    Time: 04:10:23 PM
    Date: 11-05-18
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, cases = 0, n;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        if(!(n % 3)){
            printf("Case %d: Wahdan\n", ++cases);
        } else {
            printf("Case %d: Bakkar\n", ++cases);
        }
    }

    return 0;
}
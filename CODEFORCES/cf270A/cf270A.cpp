/*
    Solved!
    Date: 20-04-18
    Time: 2:10:26 PM
    Weekly Individual-14
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, angle;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &angle);

        if(360 % (180 - angle) == 0){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
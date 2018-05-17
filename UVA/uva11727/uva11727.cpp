/*
    Solved!
    Time: 08:42:41 PM
    Date: 16-05-18
*/
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, cases = 0, a, b, c;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d", &a, &b, &c);
        
        if(a > b){
            swap(a , b);
        }

        if(b > c){
            swap(b, c);
        }

        if(a > b){
            swap(a, b);
        }

        printf("Case %d: %d\n", ++cases, b);
    }    

    return 0;
}
/*
    Solved!
    Time: 05:22:23 PM
    Date: 11-05-18
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
   /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
    freopen("ghanophobia.in", "r", stdin);
    
    int t, i, cases = 0;
    scanf("%d ", &t);

    while(t--){
       int eg, gh, g;
       scanf("%d:%d", &eg, &gh);
       g = gh;

       if(eg == 6 && gh == 1){
           printf("Case %d: PENALTIES\n", ++cases);
       } else {
           eg++;
           gh += 6;

           if(eg > gh){
               printf("Case %d: YES\n", ++cases);
           } else if(eg < gh) {
               printf("Case %d: NO\n", ++cases);
           } else {
               if(2 > g){
                    printf("Case %d: YES\n", ++cases);
               } else {
                    printf("Case %d: NO\n", ++cases);
               }
           }
       }
    }
    return 0;
}
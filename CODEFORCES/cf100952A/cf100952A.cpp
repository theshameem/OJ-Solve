/*
    Solved!
    Date: 20-04-18
    Time: 1:38:26 PM
    Weekly Individual-14
*/
#include <bits/stdc++.h>
using namespace std;
int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    int h1, m1, s1;
    int h2, m2, s2;

    scanf("%d", &t);

    while(t--){
        scanf(" %d %d %d", &h1, &m1, &s1);
        scanf(" %d %d %d", &h2, &m2, &s2);


        long long int sum1 = (h1 * 60 * 60) + (m1 * 60) + s1;
        long long int sum2 = (h2 * 60 * 60) + (m2 * 60) + s2;

        if(sum1 == sum2){
            printf("Tie\n");
        } else if (sum1 < sum2){
            printf("Player1\n");
        } else {
             printf("Player2\n");
        }
    }

    return 0;
}
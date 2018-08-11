/*
    Solved!
    Time: 11:54:53 PM
    Date: 18-06-18
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, q, i, j, big, small;
    scanf("%d", &n);
    int chimp[n];

    for(i = 0; i < n; i++){
        scanf("%d", &chimp[i]);
    }

    scanf(" %d", &q);
    int luchu;

    while(q--){
        scanf(" %d", &luchu);

        small = -1;
        big = -1;

        for(j = 0; j < n; j++){
            if(chimp[j] < luchu) small = chimp[j];
            else break;
        }

        for(j = n - 1; j >= 0; j--){
            if(chimp[j] > luchu) big = chimp[j];
            else break;
        }
        

        if(big == -1 && small == -1){
            printf("X X\n");
        } else if (big == -1 && small != -1){
            printf("%d X\n", small);
        } else if (big != -1 && small == -1){
            printf("X %d\n", big);
        } else {
            printf("%d %d\n", small, big);
        }
    }

    return 0;
}
/*
    Solved!
    Time: 05:17:11 PM
    Date: 12-05-18
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, i, res = 1, player1, player2, dis;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    if(arr[0] == 1){
        player1 = 1;
        player2 = 3;
    } else if (arr[0] == 2){
        player1 = 2;
        player2 = 3;
    } else {
        printf("NO\n");
        return 0;
    }

    for(i = 1; i < n; i++){
        if(arr[i] == player1 || arr[i] == player2){
            if((player1 == 1 && player2 == 2) || (player1 == 2 && player2 == 1)){
                player2 = 3;
            } else if ((player1 == 1 && player2 == 3) || (player1 == 3 && player2 == 1)){
                player2 = 2;
            } else if ((player1 == 2 && player2 == 3) || (player1 == 3 && player2 == 2)){
                player2 = 1;
            }
            player1 = arr[i];
        } else {
            res = 0;
            break;
        }
    }

    if(res){
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

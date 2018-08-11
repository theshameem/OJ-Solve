/*
    Solved!
    Date: 07-07-18
    Time: 07:11:13 PM
    ekhono tola hy ni.
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    //freopen("prOutput.txt", "w", stdout);

    int row, col, i, j, r, c, n;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf(" %d", &n);
            if(n == 1){
                row = i;
                col = j;
            }
        }
    }
    cout << abs(2 - col) + abs(2 - row) << endl;

    return 0;
}
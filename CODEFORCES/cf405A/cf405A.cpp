/*
    Solved!
    Time: 11:31:33 PM
    Date: 06-05-18
*/

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);
    int n, i, j, temp;
    scanf("%d", &n);
    int num[n];

    for(i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 1; j < n; j++){
            if(num[j] <= num[j - 1]){
                temp = num[j];
                num[j] += (num[j - 1] - num[j]);
                num[j - 1] -= (num[j] - temp);
            }
        }
    }

    for(i = 0; i < n; i++){
        if(i == (n - 1)){
            printf("%d\n", num[i]);
        } else {
            printf("%d ", num[i]);
        }

    }

    return 0;
}
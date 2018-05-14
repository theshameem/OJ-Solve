/*
    Solved!
    Time: 03:45:45 PM
    Date: 13-05-18
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, i, co = 0;
    scanf("%d ", &n);

    char str[n];
    scanf("%s", str);

    for(i = 0; i < n; i++){
        if(str[i] == 'x' && str[i + 1] == 'x' && str[i + 2] == 'x'){
            co++;
        }
    }

    printf("%d\n", co);

    return 0;
}
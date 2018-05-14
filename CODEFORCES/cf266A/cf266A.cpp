/*
    Solved!
    Time: 01:43:42 PM
    Date: 26-04-2018
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int n, res = 0;

    scanf("%d", &n);

    char str[n];

    scanf("%s", str);

    for(int i = 0; i < n; i++){
        if(str[i] == str[i + 1]){
            ++res;
        } else {
            continue;
        }
    }

    printf("%d\n", res);

    return 0;
}
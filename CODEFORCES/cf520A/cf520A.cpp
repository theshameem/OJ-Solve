/*
    Solved!
    Time: 09:29:11 PM
    Date: 06-05-18
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, i, j, flag, max = 0;

    scanf("%d", &n);

    char str[n];

    scanf("%s", str);

    for(i = 0; i < n; i++){
        flag = 0;
        if(str[i] != '1'){
            for(j = i + 1; j < n; j++){
                if(str[i] == str[j] || str[i] == str[j] - 32 || str[i] == str[j] + 32){
                    str[j] = '1';
                }
            }
        }
    }

    max = 0;

    for(i = 0; i < n; i++){
        if(str[i] != '1'){
            ++max;
        }
    }
    if(max >= 26){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
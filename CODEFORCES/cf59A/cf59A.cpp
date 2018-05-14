/*
    Solved!
    Time: 07:57:04 AM
    Date: 06-05-18
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char str[500];

    scanf("%s", str);

    int len = strlen(str), up = 0, low = 0;

    for(int i = 0; i < len; i++){
        if(str[i] >= 65 && str[i] <= 90){
            up++;
        } else {
            low++;
        }
    }

    if(up == low){
        for(int i = 0; i < len; i++){
            if(str[i] >= 65 && str[i] <= 90){
                printf("%c", str[i] + 32);
            } else {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    } else if (low > up){
        for(int i = 0; i < len; i++){
            if(str[i] >= 65 && str[i] <= 90){
                printf("%c", str[i] + 32);
            } else {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    } else {
        for(int i = 0; i < len; i++){
            if(str[i] >= 97 && str[i] <= 122){
                printf("%c", str[i] - 32);
            } else {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
/*
    Solved!
    Time: 09:38:09 AM
    Date: 05-05-18
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    char str[500];

    scanf("%s", str);

    int len = strlen(str), res = 1, yes_no = 0, i, j;

    for(i = 0; i < len; i++){
        for(j = i + 1; j < len; j++){
            if(str[i] == str[j]){
                ++res;

                if(res == 7){
                    yes_no = 1;
                    break;
                }
            } else {
                res = 1;
                break;
            }
        }
        i = j - 1;
        if(yes_no == 1){
            break;
        }
    }

    if(yes_no == 1){
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
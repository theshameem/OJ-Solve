/*
    Solved!
    Time: 07:31:56 PM
    Date: 06-05-18
*/

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char str[500];

    scanf("%s", str);

    int len = strlen(str);

    sort(str, str + len);

    for(int i = 0; i < len; i++){
        if(str[i] == '+'){
            continue;
        } else if (i != len - 1){
            printf("%c+", str[i]);
        } else {
            printf("%c\n", str[i]);
        }

    }

    return 0;
}
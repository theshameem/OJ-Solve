/*
    Solved!
    Time: 07:20:12 PM
    Date: 15-05-18
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int len1, len2, idx, i, j = 0;

    char str[100];
    char t_str[100];

    scanf("%s %s", str, t_str);

    len1 = strlen(str);
    len2 = strlen(t_str);

    for(i = 0; i < len2; i++){
        if(t_str[i] == str[j]){
            ++j;
        }
    }

    printf("%d\n", ++j);

    return 0;
}
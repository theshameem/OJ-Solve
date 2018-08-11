/*
    Solved!
    Time: 01:17:23 PM
    Date: 18-05-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    char str1[500];
    char str2[500];

    scanf("%s %s", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 % 2 == 1 && len2 % 2 == 1 && str1[len1 / 2] != str2[len2 / 2]){
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
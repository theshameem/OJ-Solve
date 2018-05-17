#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    char str[50];

    scanf("%s", str);

    int len = strlen(str), i;

    for(i = 0; i < len; i++){
        if(str[i] == '1' || str[i] == '4'){
            if(i == len - 1){
                printf("YES\n");
            }
        } else {
            printf("NO\n");
            break;
        }
    }

    return 0;
}
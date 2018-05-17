#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    char str[50];

    scanf("%s", str);

    int len = strlen(str), i;

    if(str[0] != '1'){
        printf("NO\n");
        return 0;
    }

    for(i = 0; i < len; i++){
        if(str[i] != '1' && str[i] != '4'){
            printf("NO\n");
            break;
        }
    }

    for(i = 0; i < len; i += 3){
        if(str[i] == '4' && str[i + 1] == '4' && str[i + 2] == '4'){
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
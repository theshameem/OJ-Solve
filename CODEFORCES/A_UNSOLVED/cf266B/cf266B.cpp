#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, t, cpy, c_t = 0, i;
    char temp;
    scanf("%d %d", &n, &t);

    char str[n];

    scanf(" %s", str);
    cpy = n;

    for(i = 0; i <= t + 1; i++){
        if(str[0] == 'B'){
            str[cpy++] = str[0];
            str[0] = '1';
            printf("%s \n", str);
        } else if (str[i] == 'B' && str[i + 1] == 'G'){
            c_t++;
            temp = str[i + 1];
            str[i + 1] = str[i];
            str[i] = temp;
        }
        printf("%s \n", str);
        if(c_t == t) break;
    }

    printf("%s\n", str);

    for(i = 0; i < cpy; i++){
        if(str[i] != '1'){
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}
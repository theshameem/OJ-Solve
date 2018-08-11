/*
    Solved!
    Time: 03:28:29 PM
    Date: 09-08-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

char val_determine(char ch);
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char str[10000][30];
    char code[100000][5];
    char x;
    ll k = 0, c, len, i, j;

    while(scanf(" %s", str[k]) != EOF){
        len = strlen(str[k]);
        c = 0;
        code[k][c++] = str[k][0];
        char y = val_determine(str[k][0]);
        for(i = 1; i < len; i++){
            x = val_determine(str[k][i]);
            if(y != x && x != '0') {
                code[k][c++] = x;
            }
            if(c > 3){
                break;
            }
            if(i == len - 1){
                while(1){
                    if(c > 3){
                        break;
                    } else {
                        code[k][c++] = '0';
                    }
                }
            }
            y = x;
        }
        ++k;
    }
    printf("         %s                     %s\n", "NAME", "SOUNDEX CODE");
    for(i = 0; i < k; i++){
        printf("         %s", str[i]);
        len = strlen(str[i]);
        for(j = 0; j < 25 - len; j++){
            printf(" ");
        }
        printf("%s\n", code[i]);
    }
    printf("                   END OF OUTPUT\n");
    return 0;
}
char val_determine(char ch){
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y' || ch == 'W' || ch == 'H'){
        return '0';
    } else if (ch == 'B' || ch == 'P' || ch == 'F' || ch == 'V'){
        return '1';
    } else if (ch == 'C' || ch == 'S' || ch == 'K' || ch == 'G' || ch == 'J' || ch == 'Q' || ch == 'X' || ch == 'Z'){
        return '2';
    } else if (ch == 'D' || ch == 'T'){
        return '3';
    } else if (ch == 'L'){
        return '4';
    } else if (ch == 'M' || ch == 'N'){
        return '5';
    } else {
        return '6';
    }
}
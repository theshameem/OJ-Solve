/*
    Solved!
    Time: 06:26:00 PM
    Date: 14-07-18
*/
#include <bits/stdc++.h>
using namespace std;
void res(char s[]);
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    char s[2010];
    char x[2010];
     
    int i, j, n, k;
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        if(i > 1) printf("\n");
        
        scanf(" %[^\n]", s);
        printf("Message #%d\n",i);

        for(j = 0; s[j] != '\0'; j++){
            if(s[j] != 32){
                k = 0;
                for(; s[j] != '\0'; j++){
                    if(s[j] == 32){
                        break;
                    } else {
                        x[k++] = s[j];
                    }
                }
                x[k] = '\0';
                res(x);
            } else {
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }    
    return 0;
}

void res(char s[]){
    if(strcmp(s,".-")==0) printf("A");
    else if(strcmp(s,"-...")==0) printf("B");
    else if(strcmp(s,"-.-.")==0) printf("C");
    else if(strcmp(s,"-..")==0) printf("D");
    else if(strcmp(s,".")==0) printf("E");
    else if(strcmp(s,"..-.")==0) printf("F");
    else if(strcmp(s,"--.")==0) printf("G");
    else if(strcmp(s,"....")==0) printf("H");
    else if(strcmp(s,"..")==0) printf("I");
    else if(strcmp(s,".---")==0) printf("J");
    else if(strcmp(s,"-.-")==0) printf("K");
    else if(strcmp(s,".-..")==0) printf("L");
    else if(strcmp(s,"--")==0) printf("M");
    else if(strcmp(s,"-.")==0) printf("N");
    else if(strcmp(s,"---")==0) printf("O");
    else if(strcmp(s,".--.")==0) printf("P");
    else if(strcmp(s,"--.-")==0) printf("Q");
    else if(strcmp(s,".-.")==0) printf("R");
    else if(strcmp(s,"...")==0) printf("S");
    else if(strcmp(s,"-")==0) printf("T");
    else if(strcmp(s,"..-")==0) printf("U");
    else if(strcmp(s,"...-")==0) printf("V");
    else if(strcmp(s,".--")==0) printf("W");
    else if(strcmp(s,"-..-")==0) printf("X");
    else if(strcmp(s,"-.--")==0) printf("Y");
    else if(strcmp(s,"--..")==0) printf("Z");
    else if(strcmp(s,"-----")==0) printf("0");
    else if(strcmp(s,".----")==0) printf("1");
    else if(strcmp(s,"..---")==0) printf("2");
    else if(strcmp(s,"...--")==0) printf("3");
    else if(strcmp(s,"....-")==0) printf("4");
    else if(strcmp(s,".....")==0) printf("5");
    else if(strcmp(s,"-....")==0) printf("6");
    else if(strcmp(s,"--...")==0) printf("7");
    else if(strcmp(s,"---..")==0) printf("8");
    else if(strcmp(s,"----.")==0) printf("9");
    else if(strcmp(s,".-.-.-")==0) printf(".");
    else if(strcmp(s,"--..--")==0) printf(",");
    else if(strcmp(s,"..--..")==0) printf("?");
    else if(strcmp(s,".----.")==0) printf("'");
    else if(strcmp(s,"-.-.--")==0) printf("!");
    else if(strcmp(s,"-..-.")==0) printf("/");
    else if(strcmp(s,"-.--.")==0) printf("(");
    else if(strcmp(s,"-.--.-")==0) printf(")");
    else if(strcmp(s,".-...")==0) printf("&");
    else if(strcmp(s,"---...")==0) printf(":");
    else if(strcmp(s,"-.-.-.")==0) printf(";");
    else if(strcmp(s,"-...-")==0) printf("=");
    else if(strcmp(s,".-.-.")==0) printf("+");
    else if(strcmp(s,"-....-")==0) printf("-");
    else if(strcmp(s,"..--.-")==0) printf("_");
    else if(strcmp(s,".-..-.")==0) printf("\"");
    else if(strcmp(s,".--.-.")==0) printf("@");
}
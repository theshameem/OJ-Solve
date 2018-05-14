/*
  Solved!
  Date: 20-04-18
  Time: 09:59:22
*/

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int global;

int order(int len, char word[]){
    int i;

    for(i = 0; i < len; i++){
        if(word[i] == 'b' || word[i] == 'c'){
            return -1;
        } else if (word[i] == 'a'){
            global = i;
            return 1;
        }
    }
}

int order2(int len, char word[]){
    int i;

    for(i = global + 1; i < len; i++){
        if(word[i] == 'c'){
            return -1;
        } else if (word[i] == 'b'){
            return 1;
        }
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char word[10000];

    scanf("%s", word);

    int len = strlen(word);

    int a = 0, b = 0, c = 0;

    if(order(len, word) == 1){
        if(order2(len, word) == 1){
            for(int i = 0; i < len; i++){
                if(word[i] == 'a'){
                    a++;
                } else if (word[i] == 'b'){
                    b++;
                } else {
                    c++;
                }
            }
        } else {
            printf("NO\n");
            return 0;
        }

    } else {
        printf("NO\n");
        return 0;
    }

    int flag_a = 0, flag_b = 0, flag_c = 0;
    if(c == a || c == b){
        for(int i = 0; i < len; i++){
          if(word[i] == 'a'){
            flag_a = 1;
          } else if (word[i] == 'b'){
            flag_b = 1;
          } else {
            flag_c = 1;;
          }

          if((flag_a == 1 &&  flag_b == 1 && word[i] == 'a') || (flag_a == 1 &&  flag_b == 1 && flag_c == 1 && (word[i] == 'a' || word[i] == 'b'))){
            printf("NO\n");
            return 0;
          }
        }

        printf("YES\n");
    } else {
        printf("NO\n");
    }


    return 0;
}
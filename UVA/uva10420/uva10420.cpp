/*
    Solved!
    Time: 06:50:51 PM
    Date: 04-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll tc, i, j, len, flag, t = 0, k, l;
    scanf("%lld", &tc);
    char str[100];
    char country[3000][100];
    for(i = 0; i < tc; i++){
        scanf(" %[^\n]", str);
        len = strlen(str);
        j = 0, k = 0, flag = 0;
        char name[100];
        while(j < len){
            if(str[j] == ' ' && flag) break;
            if(str[j] >= 65 && flag == 0){
                flag = 1;
            }

            if(flag){
                name[k++] = str[j];
            }
            ++j;
        }
        strcpy(country[t++], name);
        for(l = 0; l < k; l++) name[l] = '\0';
    }

    for(i = 0; i < tc; i++){
        for(j = i + 1; j < tc; j++){
            if(strcmp(country[i], country[j]) > 0){
                swap(country[i], country[j]);
            }
        }
    }
    ll arr[tc], p = 0, cnt;
    for(i = 0; i < tc; i++){
        cnt = 1;
        if(strcmp(country[i], "1") != 0){
            for(j = i + 1; j < tc; j++){
                if(strcmp(country[i], country[j]) == 0){
                    ++cnt;
                    strcpy(country[j], "1");
                }
            }
        }
        arr[p++] = cnt;
    }

    for(i = 0; i < tc; i++){
        if(strcmp(country[i], "1") != 0){
            cout << country[i] << " " << arr[i] << endl;
        }
    }

    return 0;
}
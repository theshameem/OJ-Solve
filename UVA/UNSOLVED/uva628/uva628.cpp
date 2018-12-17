/*
    See you later
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool used[300];
void bt(char str[], char rule[], ll cnt);
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll n, m, i, j;

    while(cin >> n){
        char word[n][300];

        for(i = 0; i < n; i++){
            scanf(" %s", str[i]);
        }
        cin >> m;
        char rule[m][300];

        for(i = 0; i < m; i++){
            scanf(" %s", rule[i]);
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                ll cnt = 0;
                for(k = 0; k < strlen(rule[j]); k++){
                    if(rule[j][k] == '0')   ++cnt;
                }
                bt(str[i], rule[j], cnt);
            }
        }
    }
    
    return 0;
}

void bt(char str[], char rule[], ll cnt){
    if(pos == n){

        return;
    }
    for(int i = 0; i < n; i++){
        if(!used[i]){
            ans[pos] = i;
            used[i] = 1;
            bt(pos + 1);
            used[i] = 0;
        }
    }
}
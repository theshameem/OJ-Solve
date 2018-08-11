/*
    Solved!
    Time: 01:35:36 AM
    Date: 11-07-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char str[200];
    cin >> str;
    char word[] = "hello";

    int len = strlen(str), k = 0, i, j,cnt = 0;

    for(i = 0; i < len; i++){
        if(k == 5) break;
        while(i < len && str[i] != word[k]){
            ++i;
        }
        if(i == len) break;
        word[k] = '1';
        k++;
        if(k == 5) break;
    }

    for(i = 0; i < 5; i++){
        if(word[i] == '1') ++cnt;
    }
    if(cnt == 5) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
/*
    Solved!
    Time: 09:03:20 PM
    Date: 19-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void is_palindrome(string str);
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str;
    ll flg;
    while(getline(cin, str) && str != "DONE"){
        flg = 0;
        int len = str.size(), i, j, k = 0;
        string tmp;
        for(i = 0; i < len; i++){
            if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
                if(str[i] >= 'A' && str[i] <= 'Z'){
                    tmp.push_back(str[i] + 32);
                    continue;
                }
                tmp.push_back(str[i]);
                flg = 1;
            }
        }
        is_palindrome(tmp);
    }
    return 0;
}

void is_palindrome(string str){
    ll len = str.size(), n, i, j;
    n = len / 2;
    for(i = 0, j = len - 1; i < n; i++, j--){
        if(str[i] == str[j]){
            continue;
        } else {
            printf("Uh oh..\n");
            return;
        }
    }
    printf("You won't be eaten!\n");
}
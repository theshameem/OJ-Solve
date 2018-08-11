/*
    Solved!
    Time: 03:00:11 PM
    Date: 02-08-18
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    char str[10];
    cin >> str;
    int len = strlen(str), i, res = 1;
    for(i = 0; i < len; i++){
        if(str[i] == 'd'){
            if(i > 0 && str[i] != str[i - 1]){
                res *= 10;
            } else if (i > 0 && str[i] == str[i - 1]){
                res *= 9;
            } else {
                res *= 10;
            }
        } else {
            if(i > 0 && str[i] != str[i - 1]){
                res *= 26;
            } else if (i > 0 && str[i] == str[i - 1]){
                res *= 25;
            } else {
                res *= 26;
            }
        }
    }
    cout << res << endl;
    return 0;
}
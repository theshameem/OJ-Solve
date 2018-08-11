/*
    Solved;
    Time: 02:11:12 PM
    Date: 08-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    char str[1000000];
    cin >> str;

    ll len = strlen(str), i, res = 0;

    for(i = 0; i  < len; i++){
        if(str[i] == 'A' && str[i + 1] == 'C' && str[i + 2] == 'M'){
            res = 1;
            break;
        }
    }
    if(res == 1){
        printf("Fun!\n");
    } else {
        printf("boring...\n");
    }
   
    return 0;
}

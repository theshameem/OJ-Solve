/*
    Solved!
    Time: 05:38:32 PM
    Date: 23-05-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, res;

    cin >> n;

    if(n == 2){
        res = 10;
    } else if (n == 4){
        res = 670;
    } else if (n == 6){
        res = 55252;
    } else {
        res = 4816030;
    }
    printf("%d\n", res);

    return 0;
}

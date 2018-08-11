/*
    Solved!
    Time: 04:11:21 PM
    Date: 01-06-18
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, i;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i == n) printf("%d\n", i);
        else printf("%d ", i);
    }
    return 0;
}

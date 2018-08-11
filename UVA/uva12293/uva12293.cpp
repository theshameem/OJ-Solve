/*
    Solved!
    Time: 12:43:10 AM
    Date: 26-05-18
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, res;

    while(1){
        scanf("%d ", &n);

        if(n == 0) break;

        int x = 1, a = 1;

        while(a <= n){
            a = (2 * x) + 1;

            if(a == n){
                res = 1;
                break;
            } else if (a > n){
                res = 0;
                break;
            } else {
                x = a;
                continue;
            }
        }
        if(!res){
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }

    return 0;
}
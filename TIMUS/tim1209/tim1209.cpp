/*
    Solved!
    Time: 09:11:18 PM
    Date: 13-05-18
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long long int t, num;
    double total;

    scanf("%lld", &t);

    for(int i = 1; i <= t; i++){
        scanf("%lld", &num);

        double total = sqrt((8 * num) - 7);
        long long s = total;

        if(total == s){
            if(i == t){
                printf("1\n");
            } else {
                printf("1 ");
            }
        } else {
            if(i == t){
                printf("0\n");
            } else {
                printf("0 ");
            }
        }
    }

    return 0;
}
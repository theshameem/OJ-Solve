/*
    Solved!
    Time: 09:44:37 AM
    Date: 18-05-18
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int d, w, m;

    scanf("%d %d %d", &d, &w, &m);

    if((w + m) <= d || w > d){
        printf("good luck\n");
    } else {
        printf("see you next semester\n");
    }

    return 0;
}
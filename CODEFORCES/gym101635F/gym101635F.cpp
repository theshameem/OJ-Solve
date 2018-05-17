/*
    Solved!
    Time: 07:48:14 PM
    Date: 14-05-18
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, w, l, wid, len, piece, to_len, i;

    scanf("%d %d", &w, &piece);

    to_len = 0;

    for(i = 0; i < piece; i++){
        scanf("%d %d", &wid, &len);

        to_len += (wid * len);
    }

    printf("%d\n", to_len / w);

    return 0;
}

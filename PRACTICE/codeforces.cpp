#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int dif, n, i, height, total = 0, cpy, flag = 0;
    scanf("%d", &n);


    for(i = 0; i < n; i++){
        scanf(" %d", &height);

        if(i == 0){
            total = height + 1;
            cpy = height;
            continue;
        } else if (height == cpy){
            total--;
            total += height + 1;
            flag++;
        } else {
            total++;
            total += height + 1;
        }
        cpy = height;
    }

    printf("%d\n", (total - flag) - 1);

    return 0;
}
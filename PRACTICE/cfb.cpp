#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int n, i, cpy, flag = 0;
    double height, total = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%lf", &height);

        if(i == 0 && flag == 0){
            total = height;
            flag = 1;
            cpy = height;
        } else {
            total += (height * 2);
            if(height < cpy && flag == 1){
                total += cpy;
                flag = 2;
            }
        }
    }

    printf("%.0lf\n", total);

    return 0;
}
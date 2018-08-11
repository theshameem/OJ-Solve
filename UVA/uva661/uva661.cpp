/*
    Solved!
    Time: 04:30:21 PM
    Date: 31-05-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m, c, i, x, cases = 0, flag = 0;

    while(1){
        scanf("%d %d %d", &n, &m, &c);

        if(n == 0 && m == 0 && c == 0) break;
        int device[n];
        int c_device[n];
        int operation[m];
        int sum[m];
        int max = 0, res = 1;

        for(i = 0; i < n; i++){
            scanf("%d ", &device[i]);
            c_device[i] = 0;
        }

        for(i = 0; i < m; i++){
            scanf("%d ", &operation[i]);
            x = ++(c_device[operation[i] - 1]);
            if(x % 2){
                max += device[operation[i] - 1];
                sum[i] = max;
            } else {
                max -= device[operation[i] - 1];
                sum[i] = max;
            }

            if(sum[i] > c){
                res = 0;
                break;
            }
        }

        if(res == 0){
            printf("Sequence %d\n", ++cases);
            printf("Fuse was blown.\n");
        } else {
            sort(sum, sum + m);
            printf("Sequence %d\n", ++cases);
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n", sum[m - 1]);
        }
        printf("\n");
    }

    return 0;
}
/*
    Solved!
    Time: 12:43:41 AM
    Date: 25-05-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a, b, c, d, e, f, n, t, cases = 0, i, j;

    scanf("%d", &t);

    while(t--){
        int arr[10005];
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);

        for(j = 0; j <= n; j++){
            if(j < 6){
                if(j == 0) arr[j] = a;
                if(j == 1) arr[j] = b;
                if(j == 2) arr[j] = c;
                if(j == 3) arr[j] = d;
                if(j == 4) arr[j] = e;
                if(j == 5) arr[j] = f;
            } else {
               arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3] + arr[j - 4] + arr[j - 5] + arr[j - 6];
            }
                arr[j] %= 10000007;
        }
        printf("Case %d: %d\n", ++cases, arr[n] % 10000007);
    }

    return 0;
}
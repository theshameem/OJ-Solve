/*
    Solved!
    Time: 11:02:39 PM
    Date: 21-06-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, i, first, end, j;
    scanf("%d", &n);

    char str[n];
    scanf(" %s", str);

    int arr[n], k = 0;

    for(i = 2; i <= n; i++){
        if(n % i == 0) arr[k++] = i;
    }

    for(i = 0; i < k; i++){
        first = 0;
        end = arr[i];
        int t = 0, l;
        char cpy[n];

        for(j = end - 1; j >= first; j--){
            cpy[t++] = str[j];
        }
        int f = 0;
        for(l = 0; l < end; l++){
            str[f++] = cpy[l];
        }
    }
    
    for(i = 0; i < n; i++) printf("%c", str[i]);

    printf("\n");

    return 0;
}
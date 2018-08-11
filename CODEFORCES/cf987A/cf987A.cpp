/*
    Solved!
    Time: 10:11:12 PM
    Date: 29-05-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int arr[6];
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int m, absent;
    scanf("%d", &m);

    absent = 6 - m;

    if(absent == 0){
        printf("0\n");
        return 0;
    } else if(m == 0) {
        printf("6\n");
        printf("Power\n");
        printf("Space\n");
        printf("Soul\n");
        printf("Mind\n");
        printf("Time\n");
        printf("Reality\n");
    } else {
        int i, j, k = 0;

        char print[6][50] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
        char all[6][50] = {"purple", "green", "blue", "orange", "red", "yellow"};
        char str[m][50];

        for(i = 0; i < m; i++){
            scanf(" %s", str[i]);

            for(j = 0; j < 6; j++){
                if(strcmp(str[i], all[j]) == 0){
                    arr[j] = 1;
                }
            }
        }
        printf("%d\n", absent);
        for(i = 0; i < 6; i++){
            if(arr[i] == 0){
                printf("%s\n", print[i]);
            }
        }

    }
    return 0;
}

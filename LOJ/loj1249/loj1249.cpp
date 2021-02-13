/*
    Solved!
    Time: 08:07:24 PM
    Date: 09-05-2018
*/

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int indicateTheif(int arr[], int a){
    int equive = 0;
    for(int i = 0; i < a; i++){
        for(int j = i + 1; j < a; j++){
            if(arr[i] != arr[j]){
                equive = 1;
                break;
            }
        }
        if(equive) break;
    }

    if(equive) return 1;
    else return 0;
}

int max(int arr[], int a){
    int big = 0, idx;
    for(int i = 0; i < a; i++){
        if(arr[i] > big){
            big = arr[i];
            idx = i;
        } 
    }

    return idx;
}

int min(int arr[], int a){
    int small = arr[0], idx;
    
    for(int i = 1; i < a; i++){
        if(arr[i] < small){
            small = arr[i];
            idx = i;
        } 
    }

    return idx;
}

typedef struct {
    char name[500];
    int len;
    int wid;
    int height;
}chocolate;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t, n, cases = 0;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        chocolate thief[n];
        int total[n];

        for(int i = 0; i < n; i++){
            scanf("%s", thief[i].name);
            scanf(" %d %d %d", &thief[i].len, &thief[i].wid, &thief[i].height);
            total[i] = (thief[i].len * thief[i].wid * thief[i].height);
        }

        if(indicateTheif(total, n) ){
            printf("Case %d: %s took chocolate from %s\n", ++cases, thief[max(total, n)].name, thief[min(total, n)].name);
        } else {
            printf("Case %d: no thief\n", ++cases);
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int biggest(int A[], int n, int x){
    while(1){
        int mid, left, right;

        ++x;

        if(A[n - 1] < x) return -2;

        left = 0;
        right = n - 1;

        while(left <= right){
            mid = left + (right - left) / 2;

            if(A[mid] == x){
                return mid;
            }

            if(A[mid] < x) left = mid + 1;
            else right = mid - 1;
        }
    return -2;
    }
}
int smallest(int A[], int n, int x){
    while(1){
        int mid, left, right;

        --x;

        if(A[0] > x) return -2;

        left = 0;
        right = n - 1;

        while(left <= right){
            mid = left + (right - left) / 2;

            if(A[mid] == x){
                return mid;
            }

            if(A[mid] < x) left = mid + 1;
            else right = mid - 1;
        }
    }

    return -2;
}

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int n, q, i, j;
    scanf("%d", &n);
    int chimp[n];

    for(i = 0; i < n; i++){
        scanf("%d", &chimp[i]);
    }

    scanf(" %d", &q);
    int luchu[q];

    for(i = 0; i < q; i++){
        scanf("%d", &luchu[i]);

        int big = biggest(chimp, n, luchu[i]);
        int small = smallest(chimp, n, luchu[i]);

        if(big == -2 && small == -2){
            printf("X X\n");
        } else if (big != -2 && small == -2){
            printf("X %d\n", chimp[big]);
        } else if (big == -2 && small != -2) {
            printf("%d X\n", chimp[small]);
        } else {
            printf("%d %d\n", chimp[small], chimp[big]);
        }
    }

    return 0;
}

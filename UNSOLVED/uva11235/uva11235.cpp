#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int n, q, num1, num2, i;

    while(1){
       scanf("%d", &n); 
       int total1 = 0, total2 = 0;
       if(!n) break;
       else {
            scanf("%d", &q);

            int arr[n];

            for(i = 0; i < n; i++){
                scanf("%d", &arr[i]);
            }

            while(q--){
                scanf(" %d %d", &num1, &num2);
                total1 = 0, total2 = 0;
                for(i = 0; i < n; i++){
                    if(arr[i] == num1){
                        ++total1;
                    } else if (arr[i] == num2){
                        ++total2;
                    }
                }

                if(total1 > total2){
                    printf("%d\n", total1);
                } else {
                    printf("%d\n", total2);
                }
            }
       }
    }
    

    return 0;
}
/*
    Solved!
    Time: 08:16:21 PM
    Date: 22-05-18
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, j, idx = 0, cases = 0, num, i, k = 1, n = 1, x = 0;

    scanf("%d", &t);

    int numbers[1000];
    int divisors[1000];

    for(i = 0; i < 1000; i++){
        numbers[i] = k++;
    }

    for(i = 1; i <= 1000; i++){
        x = 0;
        for(j = 1; j <= i; j++){
            if(i % j == 0){
                ++x;
            }
        }
        divisors[idx++] = x;
    }

    for(i = 0; i < 1000; i++){
        for(j = 0; j < 1000; j++){
            if(divisors[j] > divisors[j + 1]){
                swap(divisors[j], divisors[j + 1]);
                swap(numbers[j], numbers[j + 1]);
            }
            if((divisors[j] == divisors[j + 1]) && (numbers[j] < numbers[j + 1])){
              swap(divisors[j], divisors[j + 1]);
              swap(numbers[j], numbers[j + 1]);
            }
        }
    }

    while(t--){
        scanf("%d", &num);

        printf("Case %d: %d\n", ++cases, numbers[num - 1]);
    }

    return 0;
}

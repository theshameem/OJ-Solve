/*
    Solved!
    Time: 03:33:34 PM
    Date: 21-10-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x, i, j, k, l, m, n, t = 0;
    
    while(cin >> x, x != 0){
        int arr[x];
        for(i = 0; i < x; i++){
            cin >> arr[i];
        }
        if(t > 0)   cout << endl;
        ++t;
        for(i = 0; i < x; i++){
            for(j = i + 1; j < x; j++){
                for(k = j + 1; k < x; k++){
                    for(l = k + 1; l < x; l++){
                        for(m = l + 1; m < x; m++){
                            for(n = m + 1; n < x; n++){
                                printf("%d %d %d %d %d %d\n", arr[i], arr[j], arr[k], arr[l], arr[m], arr[n]);
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a, b, x, i, j, k, t, idx = 0;

    cin >> a >> b >> x;
    t = a + b;
    int arr[t];
    int ans[t];

    if(x % 2 == 0){
        if(a > b){
            k = x / 2;
            for(i = 0; i < k; i++){
                ans[idx++] = 1;
                ans[idx++] = 0;
            }
            k = b - (x / 2);
            for(i = 0; i < k; i++){
                ans[idx++] = 1;
            }
            k = a - (x / 2);
            for(i = 0; i < k; i++){
                ans[idx++] = 0;
            }
            for(i = 0; i < idx; i++){
                cout << ans[i];
            }
        } else {
            k = x / 2;
            for(i = 0; i < k; i++){
                ans[idx++] = 1;
                ans[idx++] = 0;
            }
            k = a - (x / 2);
            for(i = 0; i < k; i++){
                ans[idx++] = 0;
            }
            k = b - (x / 2);
            for(i = 0; i < k; i++){
                ans[idx++] = 1;
            }
            for(i = 0; i < idx; i++){
                cout << ans[i];
            }
        } 
    } else {
        if(a > b){
            k = x / 2;
            //++k;
            for(i = 0; i < k; i++){
                ans[idx++] = 0;
                ans[idx++] = 1;
            }
            k = a - (x / 2);
            //++k;
            for(i = 0; i < k; i++){
                ans[idx++] = 0;
            }
            k = b - (x / 2);
            //++k;
            for(i = 0; i < k; i++){
                ans[idx++] = 1;
            }
            for(i = 0; i < idx; i++){
                cout << ans[i];
            }
        } else {
            ++x;
            k = x / 2;
            for(i = 0; i < k; i++){
                ans[idx++] = 1;
                ans[idx++] = 0;
            }
            k = b - (x / 2);
            for(i = 0; i < k; i++){
                ans[idx++] = 0;
            }
            k = a - (x / 2);
            for(i = 0; i < k; i++){
                ans[idx++] = 1;
            }
            for(i = 0; i < idx; i++){
                cout << ans[i];
            }
        }
    }
    cout << endl;

    return 0;
}
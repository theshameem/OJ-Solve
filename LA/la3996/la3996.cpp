/*
    Solved!
    Time: 01:32:30 AM
    Date: 14-07-18
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int tc, n, cnt, j, i, rem;
    cin >> tc;

    while(tc--){
        cin >> n;
        int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        for(i = 1; i <= n; i++){
            j = i;
            while(j > 0){
                rem = j % 10;
                j /= 10;
                arr[rem]++;
            }
        }
        for(i = 0; i < 10; i++){
            if(i == 9) cout << arr[i] << endl;
            else cout << arr[i] << " ";
        }
    }

    return 0;
}
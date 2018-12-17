/*
    Solved!
    Time: 07:27:31 PM
    Date: 07-12-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll  n, i, j, res, k, cnt;

    while(cin >> n){
        ll banks[n];
        res = 0;
        for(i = 0; i < n; i++){
            cin >> banks[i];
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(banks[j] < 0){
                    if(j == 0){
                        banks[j + 1] = banks[j + 1] - abs(banks[j]);
                        banks[n - 1] = banks[n - 1] - abs(banks[j]);
                        banks[j] = abs(banks[j]);
                    } else if (j == n - 1){
                        banks[j - 1] = banks[j - 1] - abs(banks[j]);
                        banks[0] = banks[0] - abs(banks[j]);
                        banks[j] = abs(banks[j]);
                    } else {
                        banks[j + 1] = banks[j + 1] - abs(banks[j]);
                        banks[j - 1] = banks[j - 1] - abs(banks[j]);
                        banks[j] = abs(banks[j]);
                    }
                    ++res;
                }
            }
            cnt = 0;
            for(k = 0; k < n; k++){
                if(banks[k] >= 0)   ++cnt;
            }
            if(cnt < n && i == n - 1){
                i = -1;
            }
        }
        cout << res << endl;
    }

    return 0;
}

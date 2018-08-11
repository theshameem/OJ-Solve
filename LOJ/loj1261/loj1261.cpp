/*
    Solved!
    Time: 10:55:56 PM
    Date: 07-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m, k, i, j, p, tc, cases = 0, l, cnt, res, take, reject, flg = 0;

    scanf("%d", &tc);

    while(tc--){
        scanf(" %d %d %d", &n, &m, &k);
        int arr[n][k];

        for(i = 0; i < n; i++){
            for(j = 0; j < k; j++){
                scanf(" %d", &arr[i][j]);
            }
        }
        scanf(" %d", &p);
        int expectation[p];

        for(i = 0; i < p; i++){
            scanf(" %d", &expectation[i]);
        }
        if(p == 0) {
            res = 0;
            for(i = 0; i < n; i++){
                for(j = 0; j < k; j++){
                    if(arr[i][j] < 0){
                        res = 1;
                        break;
                    }
                    if(j == k - 1){
                        res = 0;
                        break;
                    }
                }
                if(res == 0) break;
            }
            if(res == 1) printf("Case %d: Yes\n", ++cases);
            else printf("Case %d: No\n", ++cases);

            continue;
        }
        for(i = 0; i < n; i++){
            res = 1;
            for(j = 0; j < k; j++){
                take = 0, reject = 0, cnt = 0;
                if(arr[i][j] < 0) reject = 1;
                else take = 1;
                
                if(take == 1){
                    for(l = 0; l < p; l++){
                        if(arr[i][j] == expectation[l]){
                            ++cnt;
                            break;
                        }
                    }
                } else {
                    for(l = 0; l < p; l++){
                        if(abs(arr[i][j]) == expectation[l] ){
                            break;
                        }
                        if(l == p - 1) ++cnt;
                    }
                }
                if(cnt > 0) break;
            }
            if(cnt == 0){
                res = 0;
                break;
            }
        }

        if(res == 1) printf("Case %d: Yes\n", ++cases);
        else printf("Case %d: No\n", ++cases);
    }
    return 0;
}
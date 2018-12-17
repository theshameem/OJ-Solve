/*
    Solved!
    Time: 05:54:13 PM
    Date: 03-12-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);    

    ll n, i, j;

    while(cin >> n, n != 0){
        ll arr[n], cnt = 0, pairs = 0;

        for(i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(i = 0; i < n; i++){
            for(j = i + 1; j < n; j++){
                ++pairs;
                if(__gcd(arr[i], arr[j]) == 1)   ++cnt;
            }
        }
        if(cnt == 0){
            printf("No estimate for this data set.\n");
        } else {
            double res = sqrt((6.0 * 1.0 * pairs) / (cnt * 1.0));
            printf("%.6lf\n", res);
        }
    }
    
    return 0;
}

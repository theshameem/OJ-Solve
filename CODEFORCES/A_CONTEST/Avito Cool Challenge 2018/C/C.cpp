#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
	ll n, i, j, k = 0, sum = 0;

    cin >> n;
    ll arr[n / 2], res[n];
    for(i = 0; i < n / 2; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int x = n - 1;
    //memset(res, 0, sizeof(res));

    for(i = 0; i < n / 2; i++){
        res[k++] = arr[i] / 2;
        res[x--] = (arr[i] / 2) + (arr[i] % 2);
    }
    //sort(res, res + n);
    x = n - 1;
    for(i = 1; i < n / 2; i++){
        if(res[i] < res[i - 1]){
            while(res[i] < res[i - 1] && res[x] > 0){
                res[i] += 1;
                res[x] -= 1;
            }
        }
    }
    for(i = 0; i < n; i++){
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}

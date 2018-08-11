/*
    Solved!
    Time: 06:48:47 PM
    Date: 07-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

typedef long long int ll;
ll calculatedResult(ll n);

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll tc, n, cases = 0;
    scanf("%lld", &tc);

    while(tc--){
        scanf(" %lld", &n);
        printf("Case %lld: %lld\n", ++cases, calculatedResult(n));
    }
    return 0;
}

ll calculatedResult(ll n){
    ll i, j, k = 0, num = n, l = 0, x, cnt = 0, flag = 0, res;
    ll arr2[500];
    ll arr[500];

    while(num > 0) {
        x = num % 2;
        arr2[k++] = x;
        num /= 2;
        if(x == 1) ++cnt;
    }
    arr2[k++] = 0;

    for(i = k - 1; i >= 0; i--) arr[l++] = arr2[i];
    for(i = l - 1; i >= 0; i--){
        if(arr[i] == 1 && arr[i - 1] == 0){
            swap(arr[i], arr[i - 1]);
            break;
        }
    }
    cnt = 0, j = i;
    for(i; i < l; i++) if(arr[i] == 1) ++cnt;
    
    for(i = l - 1; i > j; i--){
        if(cnt == 0) break;
        arr[i] = 1;
        --cnt; 
    }
    for(j; j <= i; j++) arr[j] = 0;
    k = l - 1, res = 0;

    for(i = 0; i < l; i++){
        if(arr[i] == 0 && flag == 0){
            --k;
            continue;
        }else {
            flag = 1;
        }
        res += (arr[i] * pow(2, k));
        --k;
    }
    return res;
}
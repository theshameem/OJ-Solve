/*
    Verdict: TLE
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

ll powerOfTwo[1000], k = 0, used[1200000];
void generate();
ll search(ll n);

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    generate();
    ll n, i, j, sum, cnt = 0;
    cin >> n;
    ll arr[n];

    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(n == 1){
        if(search(arr[0]) == 1){
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
        return 0;
    }

    for(i = 0; i < n; i++){
        if(used[i] == 1) continue;
        for(j = 0; j < n; j++){
            if(i == j) continue;
            sum = arr[i] + arr[j];

            if(search(sum) == 1){
                used[i] = 1;
                used[j] = 1;
                break;
            }
            if(j == n - 1) ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}

ll search(ll n){
    ll i;
    for(i = 0; i < k; i++){
        if(powerOfTwo[i] == n){
            return 1;
        }
        if(powerOfTwo[i] > n) return -1;
    }
    return -1;
}
void generate(){
    ll i, x = 2;
    while(x < 1000000000000000000){
        powerOfTwo[k++] = x;
        x *= 2;
    }
}
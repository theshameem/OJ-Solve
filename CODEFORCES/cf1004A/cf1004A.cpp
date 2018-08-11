/*
    Solved!
    Time: 04:54:16 PM
    Date: 02:08:18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, d, cnt = 0, dis, i;
    cin >> n >> d;
    ll arr[n];

    for(i = 0; i < n; i++){
        cin >> arr[i];
        if(i == 0) continue;

        dis = abs(arr[i] - arr[i - 1]);
        if(dis > (2 * d)) cnt += 2;
        else if (dis == (2 * d)) cnt++;
    }
    cout << cnt + 2 << endl;

    return 0;
}
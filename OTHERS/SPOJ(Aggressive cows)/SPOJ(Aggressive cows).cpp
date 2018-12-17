/*
    Solved!
    Time: 09:05:13 PM
    Date: 20-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void b_search(ll first, ll last, ll arr[], ll cows, ll n);

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);    

    ll tc, n_cows, set_cows;
    cin >> tc;

    while(tc--){
        cin >> n_cows >> set_cows;
        ll loc[n_cows], i, j;

        for(i = 0; i < n_cows; i++){
            cin >> loc[i];
        }
        sort(loc, loc + n_cows);
        b_search(0, loc[n_cows - 1], loc, set_cows, n_cows);
    }
    return 0;
}

void b_search(ll first, ll last, ll arr[], ll cows, ll n){
    ll mid, i, j, cnt, l_element, flag, res = 0;

    while(first <= last){
        mid = (first + last) / 2, cnt = 0, flag = 0;
        for(i = 0; i < n; i++){
            if(i == 0) {
                ++cnt;
                l_element = arr[i];
                continue;
            }
            if(abs(arr[i] - l_element) >= mid){
                ++cnt;
                l_element = arr[i];
            }
            if(cnt == cows){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            res = mid;
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }
    cout << res << endl;
}

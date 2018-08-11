/*
    Solved!
    Time: 01:41:09 AM
    Date: 09-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll cases = 0;
    while(1){
        ll n, i, j;
        cin >> n;
        if(n == 0){
            break;
        }
        ll arr[n];
        ll start, end, l, res;
        for(i = 0; i < n; i++){
            cin >> arr[i];
        }
        printf("Case %lld:\n", ++cases);

        for(i = 0; i < n; i++){
            if(arr[i] + 1 == arr[i + 1]){
                j = i;
                start = i;
                while(arr[j] + 1 == arr[j + 1]){
                    ++j;
                }
                end = j;
                printf("0%lld-", arr[start]);

                string s1 = to_string(arr[start]);
                string s2 = to_string(arr[end]);
                ll len = s2.size(), flg = 0;
                for(l = 0; l < len; l++){
                    if(s1[l] == s2[l] && flg == 0){
                        continue;
                    } else {
                        flg = 1;
                    }
                    cout << s2[l];
                }
                cout << endl;
                i = j;
            } else {
                printf("0%lld\n", arr[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
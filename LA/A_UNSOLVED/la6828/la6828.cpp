/*
    See you later
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, i, j, k, l, res, dif, cal;

    while(cin >> n){
        ll times[n];
        res = 0, dif = 0;

        for(i = 0; i < n; i++){
            cin >> times[i];
        }
        sort(times, times + n);
        k = 0;
        l = n - 1;
        for(i = 0; i < n / 2; i++){
            if(min((24 - abs(times[k] - times[l])), abs(times[k] - times[l])) < min((24 - abs(times[k] - times[k + 1])), abs(times[k] - times[k + 1]))){
                res += min((24 - abs(times[k] - times[l])), abs(times[k] - times[l]));
                ++k;
                --l;
            } else {
                res += min((24 - abs(times[k] - times[k + 1])), abs(times[k] - times[k + 1]));;
                k += 2;
                //--l;
            }
        }
        dif = 0;
        for(i = 0; i < n; i += 2){
            //dif += 
            dif += min((24 - abs(times[i] - times[i + 1])), abs(times[i] - times[i + 1]));
        }
        if(dif < res)   res = dif;
        cout << res << endl;
    }

    return 0;
}

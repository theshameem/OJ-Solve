/*
    Solved!
    Time: 10:37:19 PM
    Date: 24-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll tc, n, i, j, res, val, cases = 0;

    scanf("%lld", &tc);

    while(tc--){
        scanf("%lld", &n);

        vector<ll> v1, v2;
        vector<ll> :: iterator it;

        for(i = 0; i < n; i++){
            scanf("%lld", &val);
            v1.push_back(val);
        }
        for(i = 0; i < n; i++){
            scanf("%lld", &val);
            v2.push_back(val);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        res = 0;
        for(i = 0; i < v1.size(); i++){
            for(j = v2.size() - 1; j >= 0; j--){
                if(v1[i] > v2[j]){
                    res += 2;
                    v1.erase(v1.begin() + i);
                    v2.erase(v2.begin() + j);
                    i = -1;
                    break;
                }
            }
        }

        for(i = 0; i < v1.size(); i++){
            for(j = v2.size() - 1; j >= 0; j--){
                if(v1[i] == v2[j]){
                    res += 1;
                    v1.erase(v1.begin() + i);
                    v2.erase(v2.begin() + j);
                    i = -1;
                    break;
                }
            }
        }
        printf("Case %lld: %lld\n", ++cases, res);
    }

    return 0;
}

/*
    Solved!
    Time: 10:55:39 PM
    Date: 20-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll tc, n_points, seg, cases = 0, i, j, x, y;

    scanf("%lld", &tc);

    while(tc--){
        scanf("%lld %lld", &n_points, &seg);
        ll all_points[n_points];
        vector<ll> v;
        vector<ll> :: iterator mx, mn;

        for(i = 0; i < n_points; i++){
            scanf("%lld", &x);
            v.push_back(x);
        }
        printf("Case %lld:\n", ++cases);
        for(i = 0; i < seg; i++){
            scanf("%lld %lld", &x, &y);
            mn = lower_bound(v.begin(), v.end(), x);
            mx = upper_bound(v.begin(), v.end(), y);

            ll ans =  abs((mn - v.begin()) - (mx - v.begin()));
            printf("%lld\n", ans);
            //cout <<  << " " <<  << endl;
        }
    }

    return 0;
}

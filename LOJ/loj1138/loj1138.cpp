/*
    Solved!
    Time: 12:00:13 PM
    Date: 21-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll arr[20] = {5, 25 ,125, 625, 3125, 15625, 78125, 390625, 1953125, 9765625, 48828125, 244140625, 1220703125}, cases = 0;

void b_search(ll n){
    ll hi = n * 5, lo = 0, mid, i, total, ans = 0;
    
    while(lo <= hi){
        total = 0;
        mid = (hi + lo) / 2;
        for(i = 0; i < 13; i++){
            if(mid < n)  break;
            total += (mid / arr[i]);
        }
        if(total == n){
            ans = mid;
            hi = mid - 1;
        } else if (total < n){
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    if(ans > 0){
        printf("Case %lld: %lld\n", ++cases, ans);
    } else {
        printf("Case %lld: impossible\n", ++cases);   
    }
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll tc, q;
    scanf("%lld", &tc);
    
    while(tc--){
        scanf("%lld", &q);
        b_search(q);
    }
    return 0;
}


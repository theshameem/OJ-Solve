/*
    Solved!
    Time: 01:19:05 PM
    Date: 24-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void val_of_k(ll first, ll last);
bool check(ll mid);
ll n, cases = 0, arr[100005];
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll tc, i, j, k;

    scanf("%lld", &tc);

    while(tc--){
        scanf("%lld", &n);
        ll mx = 0, first, last;

        for(i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
            if(arr[i] > mx)   mx = arr[i];
        }
        val_of_k(0, mx);
    }

    return 0;
}

void val_of_k(ll first, ll last){
    ll i, j, mid, ans;
    
    while(first <= last){
        mid = (first + last) / 2;

        if(check(mid) == 1){
            ans = mid;
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }
    printf("Case %lld: %lld\n", ++cases, ans);
}

bool check(ll mid){
    ll i, j, k;

    for(i = 0; i < n; i++){
        if(i == 0){
            k = arr[i] - 0;
        } else {
            k = arr[i] - arr[i - 1];
        }
        if(k > mid || mid < 1)  return 0;
        else if (k == mid)  --mid;
    }
    return 1;
}

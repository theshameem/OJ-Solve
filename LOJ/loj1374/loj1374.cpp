/*
    Solved!
    Time: 06:35:51 PM
    Date: 02-12-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll tc, n, i, j, k, cases = 0;

    scanf("%lld", &tc);

    while(tc--){
        scanf("%lld", &n);
        ll pages[n];

        for(i = 0; i < n; i++){
            scanf("%lld", &pages[i]);
        }
        ll cnt = 0;
        for(i = 0; i < n; i++){
            ll *p = find(pages, pages + n, n - i - 1);

            if(p != pages + n){
                *p = -1;
                ++cnt;
            } else {
                ll *p = find(pages, pages + n, i - 0);
                if(p != pages + n){
                    *p = -1;
                    ++cnt;
                } else {
                    break;
                }
            }
        }
        if(cnt == n){
            printf("Case %lld: yes\n", ++cases);
        } else {
            printf("Case %lld: no\n", ++cases);
        }
    }

    return 0;
}

/*
    Solved!
    Time: 02:38:39 PM
    Date: 08-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll tc, n, res, a, b, c;
    cin >> tc;

    while(tc--){
        res = 0;
        cin >> n;

        if(n < 3){
            printf("IMPOSSIBLE\n");
            continue;
        }

        if(n % 3 == 0){
            a = n / 3;
            c = n / 3;
            b = n / 3;
            res = 1;
        } else if(n % 4 == 0){
            a = n / 2;
            c = (n / 4);
            b = c;
            res = 1;
        }

        if(res == 1){
            printf("%lld %lld %lld\n", a, b, c);
        }else {
            printf("IMPOSSIBLE\n");
        }
    }
    return 0;
}

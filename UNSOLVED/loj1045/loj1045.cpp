#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int long long t, num, base, cases = 0;

    scanf("%lld", &t);

    while(t--){
        scanf("%lld %lld", &num, &base);

        double x = floor((num * log10(num / M_E) + log10(2 * M_PI * num) / 2.0)) + 1;
        
        if(num == 0){
            printf("Case %lld: 1\n", ++cases);
        } else {
            printf("Case %lld: %.0lf\n", ++cases, x);
        }
    }

    return 0;
}
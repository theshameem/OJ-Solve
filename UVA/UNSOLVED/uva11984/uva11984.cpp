#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll tc, cases = 0;
    cin >> tc;

    while(tc--){
        double cel, fer, res;
        cin >> cel >> fer;
        //cout << cel << " " << fer << endl;

        res = cel + (abs((5 * fer) - 160) / 9.0);
        printf("Case %lld: %.2lf\n", ++cases, res);
    }
    
    return 0;
}

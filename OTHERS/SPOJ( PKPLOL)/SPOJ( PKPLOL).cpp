/*
    Solved!
    Time: 01:57:11 PM
    Date: 07-12-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int tc, cases = 0, n;

    cin >> tc;

    while(tc--){
        cin >> n;

        printf("Case %d: ", ++cases);
        if(n == 0){
            cout << "abcdefg" << endl;
        }else if(n == 1){
            cout << "bc" << endl;
        } else if (n == 2){
            cout << "abdeg" << endl;
        } else if (n == 3){
            cout << "abcdg" << endl;
        } else if (n == 4){
            cout << "bcfg" << endl;
        } else if (n == 5){
            cout << "acdfg" << endl;
        } else if (n == 6){
            cout << "acdefg" << endl;
        } else if (n == 7){
            cout << "abc" << endl;
        } else if (n == 8){
            cout << "abcdefg" << endl;
        } else {
            cout << "abcdfg" << endl;
        }
    }

    return 0;
}

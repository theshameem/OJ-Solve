/*
    Solved!
    Time: 11:59:45 PM
    Date: 11-08-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll n, p, i, j, cases = 0, k = 0;
    string product;

    while(1){
        cin >> n >> p;
        if(n == 0 && p == 0){
            break;
        }
        double rate[p], max;
        ll produced[p], res, flg = 0;
        string com_name[p];

        while(n--){
            cin.ignore();
            getline(cin, product);
        }
        for(i = 0; i < p; i++){
            getline(cin, com_name[i]);
            cin.ignore();
            scanf(" %lf %lld", &rate[i], &produced[i]);
            if(flg == 0){
                max = produced[i];
                res = i;
                ++flg;
            } else {
                if(produced[i] > max){
                    max = produced[i];
                    res = i;
                } else if (produced[i] == max){
                    if(rate[res] > rate[i]){
                        max = produced[i];
                        res = i;
                    }
                }
            }
            for(j = 0; j < produced[i]; j++){
                cin.ignore();
                getline(cin, product);
            }
        }
        if(k > 0){
            cout << endl;
        }
        cout << "RFP #" << ++cases << endl << com_name[res] << endl;
        ++k;
    }
    return 0;
}

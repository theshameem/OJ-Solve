/*
    Solved!
    Time: 09:12:36 PM
    Date: 27-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);    

    ll house, i, j;

    while(cin >> house, house != 0){
        ll loc[house], res = 0, flag, x;
        for(i = 0; i < house; i++){
            cin >> loc[i];
        }

        for(i = 0; i < house; i++){
            if(loc[i] > 0){
                flag = 0;
                for(j = 0; j < house; j++){
                    if(loc[j] < 0){
                        if(abs(loc[j]) >= loc[i]){
                            x = loc[j];
                            loc[j] += loc[i];
                            res += (loc[i] * abs(i - j));
                            loc[i] = 0;
                        } else {
                            res += (abs(loc[j]) * abs(i - j));
                            loc[i] += loc[j];
                            loc[j] = 0;
                        }
                    }
                    if(loc[i] == 0) break;
                }

            }
        }
        cout <<  res << endl;
    }
    
    return 0;
}

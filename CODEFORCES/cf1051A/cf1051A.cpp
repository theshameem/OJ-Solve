/*
    Solved!
    Time: 09:12:10 PM
    Date: 19-09-18
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int tc;
    cin >> tc;

    while(tc--){
        string pass;
        int upper = 0, lower = 0, digits = 0, len, i;

        cin >> pass;
        len = pass.size();

        for(i = 0; i < len; i++){
            if(pass[i] >= '0' && pass[i] <= '9')    ++digits;
            else if (pass[i] >= 'a' && pass[i] <= 'z')  ++lower;
            else if (pass[i] >= 'A' && pass[i] <= 'Z')  ++upper;
        }

        if(digits > 0 && upper > 0 && lower > 0){
            cout << pass << endl;
            continue;
        }

        if(digits == 0){
            if(upper > 1){
                for(i = 0; i < len; i++){
                    if(pass[i] >= 'A' && pass[i] <= 'Z'){
                        pass[i] = '1';
                        --upper;
                        ++digits;
                        break;
                    }
                }
            } else if (lower > 1){
                for(i = 0; i < len; i++){
                    if(pass[i] >= 'a' && pass[i] <= 'z'){
                        pass[i] = '1';
                        --lower;
                        ++digits;
                        break;
                    }
                }
            }
        }

        if(upper == 0){
            if(lower > 1){
                for(i = 0; i < len; i++){
                    if(pass[i] >= 'a' && pass[i] <= 'z'){
                        pass[i] = 'X';
                        --lower;
                        ++upper;
                        break;
                    }
                }
            } else if (digits > 1){
                for(i = 0; i < len; i++){
                    if(pass[i] >= '0' && pass[i] <= '9'){
                        pass[i] = 'D';
                        --digits;
                        ++upper;
                        break;
                    }
                }
            }
        }

        if(lower == 0){
            if(upper > 1){
                for(i = 0; i < len; i++){
                    if(pass[i] >= 'A' && pass[i] <= 'Z'){
                        pass[i] = 'x';
                        --upper;
                        ++lower;
                        break;
                    }
                }
            } else if (digits > 1){
                for(i = 0; i < len; i++){
                    if(pass[i] >= '0' && pass[i] <= '9'){
                        pass[i] = 'd';
                        --digits;
                        ++lower;
                        break;
                    }
                }
            }
        }

        cout << pass << endl;
    }

    return 0;
}

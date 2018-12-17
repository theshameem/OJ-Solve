/*
    Solved!
    Time: 08:18:00 PM
    Date: 03-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll tc, cases = 0, i, j, len1, len2;
        
    cin >> tc;
    
    while(tc--){
        string pass1, pass2;
        cin >> pass1 >> pass2;
        
        ll len1 = pass1.size(), len2 = pass2.size(), digit1 = 0, digit2 = 0, charc = 0, wa = 0, num_lock = 0, caps_lock = 0, k = 0, flg, flg1;
        
        if(pass1 == pass2){
            printf("Case %lld: Login successful.\n", ++cases);
        } else if(len1 == len2){
            for(i = 0; i < len1; i++){
                if(pass1[i] >= '0' && pass1[i] <= '9'){
                    digit1++;
                    if(pass1[i] != pass2[i]){
                        wa = 1;
                        break;
                    }
                }
                if(pass2[i] >= '0' && pass2[i] <= '9'){
                    digit2++;
                }
            }
            if(digit1 != digit2 || wa == 1){
                printf("Case %lld: Wrong password.\n", ++cases);
            } else {
                for(i = 0; i < len1; i++){
                    if(pass1[i] >= '0' && pass1[i] <= '9')  continue;
                    if(pass1[i] == pass2[i]){
                        wa = 1;
                        break;
                    }
                }
                if(wa == 1){
                    printf("Case %lld: Wrong password.\n", ++cases);
                } else {
                    printf("Case %lld: Wrong password. Please, check your caps lock key.\n", ++cases);
                }
            }
        } else if (len1 < len2){
            printf("Case %lld: Wrong password.\n", ++cases);
        } else {
            for(i = 0; i < len1; i++){
                if(pass1[i] >= '0' && pass1[i] <= '9')  ++digit1;
            }
            
            for(i = 0; i < len2; i++){
                if(pass2[i] >= '0' && pass2[i] == '9')  ++digit2;
            }
           // cout << len1 << len2 << endl;
            if(digit1 > 0 && digit2 == 0 && len1 - digit1 == len2)   num_lock = 1;
            k = 0;
            wa = 0, flg = 0, flg1 = 0;
            for(i = 0; i < len1; i++){
                if(pass1[i] >= '0' && pass1[i] <= '9')  continue;
                
                if(abs(pass1[i] - pass2[k++]) == 32 ){
                    caps_lock = 1;
                    flg = 1;
                } else {
                    caps_lock = 0;
                    flg1 = 1;
                }
                
            }
            
            if(flg == 1 && flg1 == 1){
                printf("Case %lld: Wrong password.\n", ++cases);
                continue;
            }
            
            if(num_lock == 1 && caps_lock == 1){
                printf("Case %lld: Wrong password. Please, check your caps lock and num lock keys.\n", ++cases);
            } else if (num_lock == 1 && caps_lock == 0){
                printf("Case %lld: Wrong password. Please, check your num lock key.\n", ++cases);
            } else if(num_lock == 0 && caps_lock == 1) {
                printf("Case %lld: Wrong password. Please, check your caps lock key.\n", ++cases);
            } else {
                printf("Case %lld: Wrong password.\n", ++cases);
            }
        }
    }

    return 0;
}

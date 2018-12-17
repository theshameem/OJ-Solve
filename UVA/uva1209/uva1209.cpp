/*
    Solved!
    Time: 07:43:41 PM
    Date: 14-11-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string pass, cpy, ans;
    
    while(cin >> pass){
        cpy = pass;
        int sz = pass.size(), x = 0, dif, l_mx = 0, mn = 100;
        
        for(int i = 0; i < sz - 1; i++){
            dif = abs(pass[i] - pass[i + 1]);
            if(dif < mn){
                mn = dif;
            }
        }
        if(mn > l_mx){
            l_mx = mn;
            ans = pass;
        }
        
        while(prev_permutation(pass.begin(), pass.end()) && x < 10){
            ++x, mn = 100;
            for(int i = 0; i < sz - 1; i++){
                dif = abs(pass[i] - pass[i + 1]);
                if(dif < mn){
                    mn = dif;
                }
            }
            if(mn >= l_mx){
                l_mx = mn;
                ans = pass;
            }
        }
        pass = cpy;
        x = 0;
        while(next_permutation(pass.begin(), pass.end()) && x < 10){
            ++x, mn = 100;
            for(int i = 0; i < sz - 1; i++){
                dif = abs(pass[i] - pass[i + 1]);
                if(dif < mn){
                    mn = dif;
                }
            }
            if(mn > l_mx){
                l_mx = mn;
                ans = pass;
            }
        }
        cout << ans;
        cout << l_mx << endl;
    }
    
    return 0;
}

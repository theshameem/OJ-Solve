/*
    WA
*/
#include <bits/stdc++.h>
#include <algorithm>
typedef long long int ll;
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ll n, i, j, cnt = 0, ones = 0, zeroes = 0, flg = 0;
        ll ones2 = 0, zeroes2 = 0, flg1 = 0, flg2 = 0;
        cin >> n;
        char str1[n];
        char str2[n];

        cin >> str1 >> str2;

        for(i = 0; i < n; i++){
            if(str2[i] == '1'){
                ++ones2;
            } else {
                ++zeroes2;
            }
            if(str1[i] == '1'){
                ++ones;
            } else {
                ++zeroes;
            }
            if(ones > 0 && zeroes > 0){
                flg1 = 1;
            }
            if(ones2 > 0 && zeroes2 > 0){
                flg2 = 1;
            }
            if(flg1 > 0 && flg2 > 0){
                flg = 1;
            }
        }
        if(flg == 0){
            cout << 0 << endl;
            return 0;
        }

        for(i = 0; i < n; i++){
            if(str2[i] == '0'){
                ++cnt;
            }
        }
        if(zeroes < zeroes2){
            cout << cnt << endl;
        } else {
            cout << cnt * 2 << endl;
        }
    return 0;
}

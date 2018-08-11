/*
    Solved!
    Time: 01:05:19 AM
    Date: 02-08-18
*/
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
typedef long long int ll;
using namespace std;
char str[500];
ll k = 0;
void result(ll a, ll b, ll x){
    ll n;
    if(x % 2 == 0){
        if(a > b){
            n = x / 2;
            while(n--){
                str[k++] = '0';
                str[k++] = '1';
            }
            n = b - (x / 2);
            while(n--){
                str[k++] = '1';
            }
            n = a - (x / 2);
            while(n--){
                str[k++] = '0';
            }
        } else {
            n = x / 2;
            while(n--){
                str[k++] = '1';
                str[k++] = '0';
            }
            n = a - (x / 2);
            while(n--){
                str[k++] = '0';
            }
            n = b - (x / 2);
            while(n--){
                str[k++] = '1';
            }
        }
    } else {
        if(a > b){
            n = x / 2;
            while(n--){
                str[k++] = '0';
                str[k++] = '1';
            }
            n = a - (x / 2);
            while(n--){
                str[k++] = '0';
            }
            n = b - (x / 2);
            while(n--){
                str[k++] = '1';
            }
        } else {
            n = x / 2;
            while(n--){
                str[k++] = '1';
                str[k++] = '0';
            }
            n = b - (x / 2);
            while(n--){
                str[k++] = '1';
            }
            n = a - (x / 2);
            while(n--){
                str[k++] = '0';
            }
        }
    }
    for(ll i = 0; i < k; i++){
        cout << str[i];
    }
    cout << endl;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, a, b, x;
    cin >> a >> b >> x;

    result(a, b, x);
    return 0;
}
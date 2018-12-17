/*
    Solved!
    Time: 09:38:30 AM
    Date: 21-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

map <ll, ll> mp;
map <ll, ll> :: iterator it;
ll primes[100] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
void cal_exp(ll n);
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);    

    ll n, i;

    while(cin >> n, n != 0){
        for(i = 2; i <= n; i++){
            cal_exp(i);
        }
        ll x = mp.size(), p = 0, flag = 0;
        printf("%3lld! = ", n);
        for(it = mp.begin(); it != mp.end(); it++){
            ++p;
            if(p > 15 && flag == 0){
                flag = 1;
                printf("      ");
                printf("%3lld", it->second);
                if(p != x) cout << " ";
                continue;
            }
            if(p == x){
                printf("%2lld", it->second);
            } else {
                if(p == 15){
                    printf("%2lld\n", it->second);
                    continue;
                }
                printf("%2lld ", it->second);
            }
        }
        cout << endl;
        mp.clear();
    }
    
    return 0;
}
void cal_exp(ll n){
    for(ll i = 0; i < 25; i++){
        while(n % primes[i] == 0){
            n /= primes[i];
            mp[primes[i]]++;
            if(n == 1)  return;
        }
        if(n == 1)  return;
    }
}

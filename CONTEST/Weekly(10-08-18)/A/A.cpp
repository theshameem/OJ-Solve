/*
    I
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll prime[10000], last;
void generate_prime();
ll binarySearch(ll n){
    ll first = 0, mid;

    while(first <= last){
        mid = (first + last) / 2;
        if(prime[mid] == n){
            return prime[mid];
        } else if(prime[mid] > n){
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }
    return -1;
}
int main(){
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    generate_prime();
    //printf("%lld\n", binarySearch(7));
    return 0;
    char num[300];
    ll i, j, len;
    generate_prime();
    return 0;
    while(1){
        scanf(" %s", num);
        if(strcmp(num, "0") == 0){
            break;
        }
        len = strlen(num);
        for(i = 0; i < len; i++){
            for(j = i + 1; j < len; j++){

            }
        }
    }
    return 0;
}
void generate_prime(){
    ll i, j, k = 0;
    ll idx[100000];
    for (i = 2; i < 100000; i++){
        idx[i] = 1;
    }
    for (i = 2; i < 100000; i++){
        if(idx[i] == 1){
            for (j = i; i * j < 100000; j++){
                idx[i * j] = 0;
            }
        }
    }
    for(i = 2; i < 100000; i++){
        if(idx[i]){
            cout << i << endl;
            prime[k++] = i;
        }
    }
    last = k - 1;
}

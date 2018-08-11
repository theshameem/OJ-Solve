#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int palindrome(char str[]);
int subString(char str[], int n, int K);
 
// Function to print all sub strings
int subString(char str[], int n, int K){
    int len, i, j, k, t = 0, res = 0;
    //char cpy[n];
    for(len = 1; len <= n; len++){    
        for(i = 0; i <= n - len; i++){
            j = i + len - 1, t = 0;
            char cpy[n];        
            for (k = i; k <= j; k++){
                cpy[t++] = str[k];
                //cout << str[k];
            }
            if(t < K || palindrome(cpy) == 1) ++res;
            //cout << endl;
        }
    }
    return res;
}
int palindrome(char str[]){
    char cpy[100000];
    ll len = strlen(str), i, t = 0;
    for(i = len - 1; i >= 0; i--){
        cpy[t++] = str[i];
    }
    if(! (strcmp(str, cpy) == 0)) return 1;
    else return 0;
}
 
int main() 
{
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    ll tc, k, i, res, j, len, cpy;
    char str[100000];
    cin >> tc;

    while(tc--){
        //scanf("%lld ", &k);
        cin >> k;
        scanf(" %s", str);
        len = strlen(str);
        cpy = len, res = 0;
        for(i = 1; i < k; i++){
            res += cpy;
            cpy--;
        }
        res += subString(str, len, k);
        cout << res << endl;
    }
}
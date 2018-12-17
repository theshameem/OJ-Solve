/*
    Solved!
    Time: 08:45:46 PM
    Date: 05-11-18
*/
#include <bits/stdc++.h>
using namespace std;
int n = 3000, k = 0;
bool prime[4000];

void SieveOfEratosthenes() {
    memset(prime, true, sizeof(prime)); 
  
    for (int p = 2; p * p <= n; p++) { 
        if (prime[p] == true) { 
            for (int i = p * 2; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
} 
 

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    SieveOfEratosthenes();
    int tc, cases = 0, i, j;
    string word;
    cin >> tc;
    
    while(tc--){
        cin >> word;
        sort(word.begin(), word.end());
        int cnt = 0, len = word.size(), res = 0;
        printf("Case %d: ", ++cases);
        for(i = 0; i < len; i++){
            cnt = 1;
            while(word[i] == word[i + 1]){
                ++cnt;
                ++i;
            }
            if(prime[cnt] == true && cnt > 1){
                printf("%c", word[i]);
                res = 1;
            }
        }
        if(res == 0){
            printf("empty");
        }
        cout << endl;
    }
    return 0;
}
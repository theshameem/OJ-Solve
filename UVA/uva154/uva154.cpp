#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void res(char str[200][200], ll n);
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    while(1){
        char str[200][200];
        ll i = 0, j = 0;

        while(1){
            cin >> str[i++];
            if(str[i - 1][j] == 'e'){
                res(str, i - 1);
                break;
            } else if(str[i - 1][j] == '#'){
                return 0;
            }
        }
    }
    return 0;
}
void res(char str[200][200], ll n){
    ll i, j, min, cnt, k, l, result;
    for(i = 0; i < n; i++){
        cnt = 0;
        if(i == 0) result = 0;
        for(j = 0; j < 19; j += 4){
            for(k = 0; k < n; k++){
                if(i == k)  continue;
                for(l = 0; l < 19; l += 4){
                    if(str[i][j] == str[k][l]){
                        if(str[i][j + 2] != str[k][l + 2]){
                            ++cnt;
                            break;
                        }
                    }
                    if(i == 0) min = cnt;
                }
            }
        }
        if(cnt < min && i > 0) {
            result = i;
            min = cnt;
        }
    }
    cout << result + 1 << endl;
}
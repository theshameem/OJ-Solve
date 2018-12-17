/*
    Solved!
    Time: 10:39:40 AM
    Date: 20-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void convert_into_Arabic(char str[]);
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    char str[10];

    while(scanf(" %s", str) != EOF){
        convert_into_Arabic(str);
    }
    
    return 0;
}

void convert_into_Arabic(char str[]){
    ll len, i, dif, n = 0, rem, k = 0, x = 10, ans = 0;
    char res[100];
    len = strlen(str);
    for(i = 0; i < len; i++){
        n *= 10;
        n += (str[i] - 48);
    }

    while(len--){
        rem = n % x;
        n -= rem;
        x *= 10;
        
        if(rem == 0){
            continue;
        } else if(rem == 1){
            res[k++] = 'I';
            ++ans;
            continue;
        } else if (rem == 5){
            res[k++] = 'V';
            ans += 2;
            continue;
        } else if (rem == 10){
            res[k++] = 'X';
            ans += 2;
            continue;
        } else if (rem == 50){
            res[k++] = 'L';
            ans += 2;
            continue;
        } else if (rem == 100){
            res[k++] = 'C';
            ans += 2;
            continue;
        } else if (rem == 500){
            res[k++] = 'D';
            ans += 3;
            continue;
        } else if (rem == 1000){
            res[k++] = 'M';
            ans += 4;
            continue;
        } else if (rem > 1000){
            dif = rem / 1000;
            while(dif--){
                res[k++] = 'M';
                ans += 4;
            }
        } else if (rem > 500){
            if(rem == 900){
                res[k++] = 'M';
                ans += 4;
                res[k++] = 'C';
                ans += 2;
            } else {
                dif = (rem - 500) / 100;
                while(dif){
                    res[k++] = 'C';
                    ans += 2;
                    --dif;
                }
                res[k++] = 'D';
                ans += 3;
            }
        } else if (rem > 100){
            if(rem == 400){
                res[k++] = 'D';
                res[k++] = 'C';
                ans += 3;
                ans += 2;
            } else {
                dif = rem / 100;
                while(dif--){
                    res[k++] = 'C';
                    ans += 2;
                }
            }
        } else if (rem > 50){
            if(rem == 90){
                res[k++] = 'C';
                res[k++] = 'X';
                ans += 4;
            } else {
                dif = (rem - 50) / 10;
                while(dif--){
                    res[k++] = 'X';
                    ans += 2;
                }
                res[k++] = 'L';
                ans += 2;
            }
        } else if (rem > 10){
            if(rem == 40){
                res[k++] = 'L';
                res[k++] = 'X';
                ans += 4;
            } else {
                dif = rem / 10;
                while(dif--){
                    res[k++] = 'X';
                    ans += 2;
                }
            }
        } else if (rem > 5){
            if(rem == 9){
                res[k++] = 'X';
                res[k++] = 'I';
                ans += 3;
            } else {
                dif = (rem - 5);
                while(dif--){
                    res[k++] = 'I';
                    ++ans;
                }
                res[k++] = 'V';
                ans += 2;
            }
        } else if (rem > 1){
            if(rem == 4){
                res[k++] = 'V';
                res[k++] = 'I';
                ans += 3;
            } else {
                dif = rem;
                while(dif--){
                    res[k++] = 'I';
                    ++ans;
                }
            }
        }
    }
    cout << ans << endl;
}

/*
    Solved!
    Time: 11:23:50 AM
    Date: 20-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll res_i = 0, res_v = 0, res_x = 0, res_l = 0, res_c = 0;
void convert_into_Arabic(string str);
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    
    char str[10];

    while(scanf(" %s", str)){
        if(strcmp(str, "0") == 0)   break;
        res_i = 0, res_v = 0, res_x = 0, res_l = 0, res_c = 0;
        
        ll len = strlen(str), i, n = 0;
        for(i = 0; i < len; i++){
            n *= 10;
            n += (str[i] - 48);
        }
        for(i = 1; i <= n; i++){
            string call;
            call = to_string(i);
            convert_into_Arabic(call);
        }
        printf("%s: %lld i, %lld v, %lld x, %lld l, %lld c\n", str, res_i, res_v, res_x, res_l, res_c);
    }
    
    return 0;
}

void convert_into_Arabic(string str){
    ll len, i, dif, n = 0, rem, k = 0, x = 10, ans = 0;
    char res[100];
    len = str.size();
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

    for(i = 0; i < k; i++){
        if(res[i] == 'I')   ++res_i;
        else if (res[i] == 'V') ++res_v;
        else if (res[i] == 'X') ++res_x;
        else if (res[i] == 'L') ++res_l;
        else if (res[i] == 'C') ++res_c;
    }
}

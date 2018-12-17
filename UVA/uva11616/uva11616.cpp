/*
    Solved!
    Time: 05:30:31 AM
    Date: 11-08-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void convert_into_Arabic(char str[]);
void convert_into_Ruman(char str[]);

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    char num[100];

    while(scanf(" %s", num) != EOF){
        if(num[0] >= 48 && num[0] <= 57){
            convert_into_Arabic(num);
        } else {
            convert_into_Ruman(num);
        }
    }
    return 0;
}
void convert_into_Ruman(char str[]) {
    ll len, i, res = 0;
    len = strlen(str);

    for(i = len - 1; i >= 0; i--){
        if(str[i] == 'V'){
            if(str[i - 1] == 'I'){
                res += 4;
                --i;
            } else {
                res += 5;
            }
        } else if (str[i] == 'X'){
            if(str[i - 1] == 'I'){
                res += 9;
                --i;
            } else {
                res += 10;
            }
        } else if (str[i] == 'L'){
            if(str[i - 1] == 'X'){
                res += 40;
                --i;
            } else {
                res += 50;
            }
        } else if (str[i] == 'C'){
            if(str[i - 1] == 'X'){
                res += 90;
                --i;
            } else {
                res += 100;
            }
        } else if (str[i] == 'D'){
            if(str[i - 1] == 'C'){
                res += 400;
                --i;
            } else {
                res += 500;
            }
        } else if (str[i] == 'M'){
            if(str[i - 1] == 'C'){
                res += 900;
                --i;
            } else {
                res += 1000;
            }
        } else if (str[i] == 'I'){
            ++res;
        }
    }
    cout << res << endl;
}
void convert_into_Arabic(char str[]){
    ll len, i, dif, n = 0, rem, k = 0, x = 10;
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
            continue;
        } else if (rem == 5){
            res[k++] = 'V';
            continue;
        } else if (rem == 10){
            res[k++] = 'X';
            continue;
        } else if (rem == 50){
            res[k++] = 'L';
            continue;
        } else if (rem == 100){
            res[k++] = 'C';
            continue;
        } else if (rem == 500){
            res[k++] = 'D';
            continue;
        } else if (rem == 1000){
            res[k++] = 'M';
            continue;
        } else if (rem > 1000){
            dif = rem / 1000;
            while(dif--){
                res[k++] = 'M';
            }
        } else if (rem > 500){
            if(rem == 900){
                res[k++] = 'M';
                res[k++] = 'C';
            } else {
                dif = (rem - 500) / 100;
                while(dif){
                    res[k++] = 'C';
                    --dif;
                }
                res[k++] = 'D';
            }
        } else if (rem > 100){
            if(rem == 400){
                res[k++] = 'D';
                res[k++] = 'C';
            } else {
                dif = rem / 100;
                while(dif--){
                    res[k++] = 'C';
                }
            }
        } else if (rem > 50){
            if(rem == 90){
                res[k++] = 'C';
                res[k++] = 'X';
            } else {
                dif = (rem - 50) / 10;
                while(dif--){
                    res[k++] = 'X';
                }
                res[k++] = 'L';
            }
        } else if (rem > 10){
            if(rem == 40){
                res[k++] = 'L';
                res[k++] = 'X';
            } else {
                dif = rem / 10;
                while(dif--){
                    res[k++] = 'X';
                }
            }
        } else if (rem > 5){
            if(rem == 9){
                res[k++] = 'X';
                res[k++] = 'I';
            } else {
                dif = (rem - 5);
                while(dif--){
                    res[k++] = 'I';
                }
                res[k++] = 'V';
            }
        } else if (rem > 1){
            if(rem == 4){
                res[k++] = 'V';
                res[k++] = 'I';
            } else {
                dif = rem;
                while(dif--){
                    res[k++] = 'I';
                }
            }
        }
    }
    for(i = k - 1; i >= 0; i--){
        cout << res[i];
    }
    cout << endl;
}

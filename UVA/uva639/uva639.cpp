/*
    Solved!
    Time: 11:50:51 PM
    Date: 20-10-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, i, j, res, k, l, cnt_x, cnt_one;
    
    while(cin >> n, n != 0){
        char str[n][n];
        bool flag = true;
        res = 0, cnt_x = 0, cnt_one = 0;;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                cin >> str[i][j];
                if(str[i][j] == 'X')    ++cnt_x;
            }
        }
        if(cnt_x == 0){
            cout << n << endl;
            continue;
        }
        
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(str[i][j] == 'X'){
                    if(str[i][j - 1] == '.' && j > 0){
                        ++res;
                        str[i][j - 1] = '1';
                        k = j - 2, l = i;
                        while(k >= 0){
                            if(str[l][k] == 'X')    break;
                            str[l][k--] = 'O';
                        }
                        k = j - 1, l = i - 1;
                        while(l >= 0){
                            if(str[l][k] == 'X')    break;
                            str[l--][k] = 'O';
                        }
                        k = j - 1, l = i + 1;
                        while(l < n){
                            if(str[l][k] == 'X')    break;
                            str[l++][k] = 'O';
                        }
                    }
                    if(str[i][j + 1] == '.' && j < n - 1){
                        ++res;
                        str[i][j + 1] = '1';
                        k = j + 2, l = i;
                        while(k < n){
                            if(str[l][k] == 'X')    break;
                            str[l][k++] = 'O';
                        }
                        
                        k = j + 1, l = i - 1;
                        while(l >= 0){
                            if(str[l][k] == 'X')    break;
                            str[l--][k] = 'O';
                        }
                        k = j + 1, l = i + 1;
                        while(l < n){
                            if(str[l][k] == 'X')    break;
                            str[l++][k] = 'O';
                        }
                    }
                }
            }
        }
        
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(str[j][i] == 'X'){
                    if(str[j - 1][i] == '.' && j > 0){
                        ++res;
                        str[j - 1][i] = '1';
                        k = j - 1, l = i + 1;
                        while(l < n){
                            if(str[k][l] == 'X')    break;
                            str[k][l++] = 'O';
                        }
                    }
                    
                    if(str[j + 1][i] == '.' && j + 1 < n){
                        ++res;
                        str[j + 1][i] = '1';
                        k = j + 1, l = i + 1;
                        while(l < n){
                            if(str[k][l] == 'X')    break;
                            str[k][l++] = 'O';
                        }
                    }
                    
                }
            }
        }
        
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(str[i][j] == '.'){
                    cnt_one = 0;
                    for(k = 0; k < n; k++){
                        if(str[i][k] == '1')  ++cnt_one;
                        if(cnt_one) break;
                    }
                    if(cnt_one == 0){
                        for(k = 0; k < n; k++){
                            if(str[k][j] == '1')    ++cnt_one;
                            if(cnt_one) break;
                        }
                        if(cnt_one == 0){
                            ++res;
                            str[i][j] = '1';
                        }
                    } else {
                        continue;
                    }
                }
            }
        }
        cout << res << endl;
    }
    
    return 0;
}
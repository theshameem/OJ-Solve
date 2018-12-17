/*
    Solved!
    Time: 07:09:13 PM
    Date: 22-09-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    int n, m, i, j, field = 0, cnt;

    while(cin >> n >> m && n != 0 && m != 0){
        if(field > 0){
            cout << endl;
        }
        char arr[n][m];
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }
        printf("Field #%d:\n", ++field);
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                cnt = 0;
                if(i == 0){
                    //cout << i << " ";
                    if(arr[i][j] == '*'){
                        cout << "*";
                    } else {
                        cnt = 0;
                        if(arr[i][j - 1] == '*' && j > 0)    ++cnt;//ok
                        if(arr[i][j + 1] == '*' && j < m - 1)    ++cnt;
                        if(arr[i + 1][j + 1] == '*' && i < n - 1 && j < m - 1)    ++cnt;
                        if(arr[i + 1][j - 1] == '*' && j > 0 && i < n - 1)    ++cnt;//ok
                        if(arr[i + 1][j] == '*' && i < n - 1)    ++cnt;
                        cout << cnt;
                    }
                } else {
                    if(arr[i][j] == '*'){
                        cout << "*";
                    } else {
                        cnt = 0;
                        if(arr[i][j - 1] == '*' && j > 0)    ++cnt;//ok
                        if(arr[i][j + 1] == '*' && j < m - 1)    ++cnt;
                        if(arr[i + 1][j] == '*' && i < n - 1)    ++cnt;//ok
                        if(arr[i + 1][j + 1] == '*' && i < n - 1 && j < m - 1)    ++cnt;
                        if(arr[i + 1][j - 1] == '*' && j > 0 && i < n - 1)    ++cnt;
                        if(arr[i - 1][j - 1] == '*' && j > 0)    ++cnt;//ok
                        if(arr[i - 1][j + 1] == '*' && j < m - 1)    ++cnt;
                        if(arr[i - 1][j] == '*')    ++cnt;
                        cout << cnt;
                    }
                }
            }
            cout << endl;
        }
    }
    
    return 0;
}

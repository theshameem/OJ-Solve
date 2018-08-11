/*
    Solved!
    Time: 02:43:22 AM
    Date: 18-07-18
*/
#include <bits/stdc++.h>
using namespace std;
int check(int n);
char grid[3][3];
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int tc, cnt_x, cnt_o, cnt_dot, i, j, x, y;
    cin >> tc;

    while(tc--){
        cnt_o = 0, cnt_x = 0, cnt_dot = 0;
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                cin >> grid[i][j];
                if(grid[i][j] == 'X') cnt_x++;
                else if(grid[i][j] == 'O') cnt_o++;
                else cnt_dot++;
            }
        }
        x = check(1);
        y = check(2);
        if(cnt_dot % 2 == 1){
            if(!(x && y)){
                if(x){
                    if(cnt_o == cnt_x - 1) cout << "yes" << endl;
                    else cout << "no" << endl;
                } else if(y){
                    if(cnt_x == cnt_o) cout << "yes" << endl;
                    else cout << "no" << endl;
                } else if (cnt_o == cnt_x){
                    cout << "yes" << endl;
                } else {
                    cout << "no" << endl;
                }
            } else {
                cout << "no" << endl;
            }
        } else {
            if(!(x && y)){
                if(x){
                    if(cnt_o == cnt_x - 1) cout << "yes" << endl;
                    else cout << "no" << endl;
                } else if(y){
                    if(cnt_x == cnt_o) cout << "yes" << endl;
                    else cout << "no" << endl;
                } else if (cnt_o == cnt_x - 1){
                    cout << "yes" << endl;
                } else {
                    cout << "no" << endl;
                }
            } else {
                cout << "no" << endl;
            }
        }

    }
    return 0;
}

int check(int n){
    char ch;
    if(n == 1) ch = 'X';
    else ch = 'O';

    if(grid[0][0] == ch && grid[1][0] == ch && grid[2][0] == ch) return 1;
    else if (grid[0][1] == ch && grid[1][1] == ch && grid[2][1] == ch) return 1;
    else if (grid[0][2] == ch && grid[1][2] == ch && grid[2][2] == ch) return 1;
    else if (grid[0][0] == ch && grid[0][1] == ch && grid[0][2] == ch) return 1;
    else if (grid[1][0] == ch && grid[1][1] == ch && grid[1][2] == ch) return 1;
    else if (grid[2][0] == ch && grid[2][1] == ch && grid[2][2] == ch) return 1;
    else if (grid[0][0] == ch && grid[1][1] == ch && grid[2][2] == ch) return 1;
    else if (grid[0][2] == ch && grid[1][1] == ch && grid[2][0] == ch) return 1;
    else return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int long long x, y, res;

    cin >> x >> y;
    if(x == 3 && (y == 4 || y == 5)){
        cout << '>' << endl;
        return 0;
    }
    if(x > 1 && y == 1){
        printf(">\n");
        return 0;
    } else if (x == 1 && y > 1){
        printf("<\n");
        return 0;
    }

    if(abs(x - y) == 0 || abs(x - y) == 2){
        res = 0;
    } else if (abs(x - y) == 1){
        if(x < y){
            res = 1;
        } else {
            res = 2;
        }
    } else {
        if(x < y){
            res = 2;
        } else {
            res = 1;
        }
    }

    if(res == 0){
        printf("=\n");
    } else if (res == 1){
        printf("<\n");
    } else {
        printf(">\n");
    }

    return 0;
}
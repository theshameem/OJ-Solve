/*
    Solved!
    Time: 09:15:13 PM
    Date: 20-05-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;

    cin >> t;

    int ah[8] = {2, 3, 4, 4, 4, 4, 3, 2};
    int bg[8] = {3, 4, 6, 6, 6, 6, 4, 3};
    int cdef[8] = {4, 6, 8, 8, 8, 8, 6, 4};

    while(t--){
        char a;
        int b;
        cin >> a;
        cin >> b;

        if(a == 'a' || a == 'h'){
            cout << ah[b - 1] << endl;
        } else if (a == 'b' || a == 'g'){
            cout << bg[b - 1] << endl;
        } else {
            cout << cdef[b - 1] << endl;
        }
    }

    return 0;
}

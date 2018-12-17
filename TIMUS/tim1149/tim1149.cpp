/*
    Solved!
    Time: 06:40:41 PM
    Date: 25-10-18
*/
#include <bits/stdc++.h>
using namespace std;
int x;
void sinusDances(int begin, int sesh){
    if(begin == sesh){
        return;
    }
    if(begin + 1 == sesh){
        cout << "sin(" << begin + 1;
    } else if(begin + 1 < sesh){
        cout << "sin(" << begin + 1;
    }
    if((begin + 1) % 2 == 0 && (begin + 1) < sesh)    cout << "+";
    else if((begin + 1) % 2 == 1 && (begin + 1) < sesh)    cout << "-";
    
    
    
    sinusDances(begin + 1, sesh);
    cout << ")";
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, i, j;
    cin >> n;
    if(n == 1){
        cout << "sin(1)+1" << endl;
        return 0;
    }
    x = n;
    cout << "(";
    for(i = 0; i < n - 3; i++)  cout << "(";
    for(i = 1; i <= n; i++){
        if(i == 1){
            cout << "(";   
        }
        sinusDances(0, i);
        if(x != 1){
            cout << "+" << x << ")";   
        }
        --x;
    }
    cout << "+" << 1 << endl;
}

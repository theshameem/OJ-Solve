/*
    Solved!
    Time: 10:05:14 PM
    Date: 02-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
   int n, q, x, pos, i, a, b;
    cin >> n >> q >> x;
    int arr[n], k = 1;;
    pos = x;
    
    for(i = 0; i < n; i++){
        arr[i] = k++;
    }
    for(i = 0; i < q; i++){
        cin >> a >> b;
        swap(arr[a - 1], arr[b - 1]);
        if(arr[b - 1] == pos){
            pos = arr[b - 1];
        }
    }
    for(i = 0; i < n; i++){
        if(arr[i] == pos){
            cout << i + 1 << endl;
            break;
        }
    }
    
    return 0;
}

/*
    Solved!
    Time: 10:11:16 AM
    Date: 18-05-18
*/
#include <bits/stdc++.h>

using namespace std;

int long long Search(int long long A[], int long long n, int long long x){
    int i;

    for(i = 0; i < n; i++){
        if(A[i] == x){
            return ++i;
        }
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int long long n, i, j = 0, x;

    cin >> n;

    int long long distance[n];
    int long long cpy_distance[n];

    for(i = 0; i < n; i++){
        cin >> distance[i];
        cpy_distance[j++] = distance[i];
    }

    sort(distance, distance + n);

    if(distance[0] == distance[1]){
        printf("Still Rozdil\n");
        return 0;
    } else {
        x = distance[0];
    }

    int long long idx = Search(cpy_distance, n, x);

    cout << idx << endl;

    return 0;
}
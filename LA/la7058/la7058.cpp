/*
    Solved!
    Time: 03:15:17 PM
    Date: 22-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct time_point{
    double x, y;  
};

bool sort_method(struct time_point a, struct time_point b){
    if(a.x < b.x){
        return 1;
    }
    return 0;
}

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll tc, n, i, j, cases = 0;
    cin >> tc;

    while(tc--){
        cin >> n;
        time_point arr[n];
        for(i = 0; i < n; i++){
            cin >> arr[i].x >> arr[i].y;
        }
        sort(arr, arr + n, sort_method);

        double ans = 0;
        for(i = 1; i < n; i++){
            if((abs(arr[i].y - arr[i - 1].y) / abs(arr[i].x - arr[i - 1].x)) > ans){
                ans = (abs(arr[i].y - arr[i - 1].y) / abs(arr[i].x - arr[i - 1].x));
            }
        }
        printf("Case #%lld: %.2lf\n", ++cases, ans);
    }
    return 0;
}

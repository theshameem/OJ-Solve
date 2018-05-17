/*
    Solved!
    Time: 08:33:59 PM
    Date: 16-05-18
*/
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, num, res;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &num);

        res = (((((num * 567) / 9) + 7492) * 235) / 47) - 498;
        res /= 10;
        printf("%d\n", abs(res % 10));
    }

    return 0;
}
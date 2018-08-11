/*
	Solved!
    Time: 06:00:01 PM
    Date: 05-08-18
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll time, hour, min, sec, cc, total_mili, res;

    while(cin >> time){
        cc = time % 100;
        time /= 100;
        sec = time % 100;
        time /= 100;
        min = time % 100;
        time /= 100;
        hour = time % 100;
        time /= 100;

        total_mili = (hour * 3600000) + (min * 60000) + (sec * 1000) + (cc * 10);
        res = (total_mili * 10000000) / 86400000;
        printf("%07lld\n", res);
    }

    return 0;
}

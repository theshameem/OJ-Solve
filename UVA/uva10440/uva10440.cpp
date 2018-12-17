/*
    Solved!
    Time: 05:54:29 PM
    Date: 22-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);    

    ll tc, per_trip, time, cars, i, j, mn_trips, mn_time, rem;
    cin >> tc;

    while(tc--){
        cin >> per_trip >> time >> cars;
        ll cars_arrival[cars];
        mn_time = 0, rem = 0;

        for(i = 0; i < cars; i++){
            cin >> cars_arrival[i];
        }

        if(cars % per_trip > 0){
            mn_trips = (cars / per_trip) + 1;
            rem = cars % per_trip;
            mn_time += (cars_arrival[rem - 1] + (time * 2));
        } else {
            mn_trips = (cars / per_trip);
            rem = cars % per_trip;
            mn_time = 0;
        }

        for(i = rem; i < cars; i++){
            i += per_trip;
            --i;
            if((cars_arrival[i]) <= mn_time){
                mn_time += (time * 2);
            } else {
                mn_time += ((cars_arrival[i] - mn_time) + (time * 2));
            }
        }
        cout << mn_time - time << " " << mn_trips << endl;
    }
    
    return 0;
}

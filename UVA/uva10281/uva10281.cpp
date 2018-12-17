/*
    Solved!
    Time: 06:00:01 PM
    Date: 11-08-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    string time;
    ll len, temp = 0, total_times, prev_times = 0, i;
    double dis = 0, speed = 0, hh, mm, ss, x = 0;

    while(getline(cin , time)){
        len = time.size();
        
        if(len > 8){
            hh = ((time[0] - 48) * 10) + (time[1] - 48);
            mm = ((time[3] - 48) * 10) + (time[4] - 48);
            ss = ((time[6] - 48) * 10) + (time[7] - 48);

            total_times = ((hh * 3600) + (mm * 60) + ss);
            x = prev_times;
            prev_times = total_times;
            total_times -= x;
            dis += ((speed * total_times) / 3600);
            
            i = 0;
            speed = 0;
            for(i = 9; i < len; i++){
                speed *= 10;
                speed += (time[i] - 48);
            }
        } else {
            hh = ((time[0] - 48) * 10) + (time[1] - 48);
            mm = ((time[3] - 48) * 10) + (time[4] - 48);
            ss = ((time[6] - 48) * 10) + (time[7] - 48);

            total_times = ((hh * 3600) + (mm * 60) + ss);
            x = prev_times;
            prev_times = total_times;
            total_times -= x;
            dis += ((speed * total_times) / 3600);
            
            cout << time << " ";
            printf("%.2lf km\n", dis);
        }
    }
    
    return 0;
}

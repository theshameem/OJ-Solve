/*
    Solved!
    Time: 07:49:10 PM
    Date: 16-05-18
*/
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int weight, t, total_eggs, bowl_carry, egg_weight, cases = 0, cnt, flag;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d", &total_eggs, &bowl_carry, &egg_weight);
        flag = 0, cnt = 0, weight = 0;
        int eggs[total_eggs];

        for(int i = 0; i < total_eggs; i++){
            scanf("%d", &eggs[i]);

            if(flag == 0 && cnt <= bowl_carry && weight <= egg_weight){
                cnt++;
                weight += eggs[i];

                if(weight > egg_weight){
                    flag = 1;
                    cnt--;
                } else if (cnt == bowl_carry || weight == egg_weight){
                    flag = 1;
                }
            }
        }

        printf("Case %d: %d\n", ++cases, cnt);
    }
    return 0;
}
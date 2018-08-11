/*
    Solved!
    Time: 09:51:11 PM
    Date: 16-05-18
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, date_sh, date_sm, date_eh, date_em;
    int meet_sh, meet_sm, meet_eh, meet_em, cases = 0;
    
    scanf("%d ", &t);

    while(t--){
        scanf("%d:%d %d:%d", &date_sh, &date_sm, &date_eh, &date_em);
        scanf(" %d:%d %d:%d", &meet_sh, &meet_sm, &meet_eh, &meet_em);
        
        date_sh *= 60;
        date_sm += date_sh;

        date_eh *= 60;
        date_em += date_eh;

        meet_sh *= 60;
        meet_sm += meet_sh;

        meet_eh *= 60;
        meet_em += meet_eh;

        if(meet_em < date_sm || meet_sm > date_em){
            printf("Case %d: Hits Meeting\n", ++cases);
        } else {
            printf("Case %d: Mrs Meeting\n", ++cases);
        }
    }

    return 0;
}
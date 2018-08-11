/*
    Solved!
    Time: 04:59:59 AM
    Date: 10-08-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll tc, n, m, cases = 0, val, res, right, left;
    scanf("%lld", &tc);

    while(tc--){
        scanf(" %lld %lld", &n, &m);
        vector <ll> pushLeft;
        vector <ll> pushRight;
        ll size = 0;
        char command[50];
        printf("Case %lld:\n", ++cases);

        while(m--){
            scanf(" %s", command);
            if(strcmp(command, "pushLeft") == 0){
                scanf(" %lld", &val);
                if(size == n){
                    printf("The queue is full\n");
                } else {
                    ++size;
                    pushLeft.push_back(val);
                    printf("Pushed in left: %lld\n", val);
                }
            } else if (strcmp(command, "pushRight") == 0){
                scanf(" %lld", &val);
                if(size == n){
                    printf("The queue is full\n");
                } else {
                    ++size;
                    pushRight.push_back(val);
                    printf("Pushed in right: %lld\n", val);
                }
            } else if (strcmp(command, "popLeft") == 0){
                left = pushLeft.size();
                right = pushRight.size();
                res = -200;
                if(left > 0){
                    res = pushLeft.back();
                    pushLeft.erase(pushLeft.begin() + (left - 1));
                } else if (right > 0){
                    res = pushRight.front();
                    pushRight.erase(pushRight.begin() + 0);
                }
                if(res > -200){
                    --size;
                    printf("Popped from left: %lld\n", res);
                } else {
                    printf("The queue is empty\n");
                }
            } else {
                left = pushLeft.size();
                right = pushRight.size();
                res = -200;
                if(right > 0){
                    res = pushRight.back();
                    pushRight.erase(pushRight.begin() + (right - 1));
                } else if (left > 0){
                    res = pushLeft.front();
                    pushLeft.erase(pushLeft.begin() + 0);
                }
                if(res > -200){
                    --size;
                    printf("Popped from right: %lld\n", res);
                } else {
                    printf("The queue is empty\n");
                }
            }
        }
    }
    return 0;
}

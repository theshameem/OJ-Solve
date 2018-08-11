#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    //freopen("prOutput.txt", "w", stdout);
    
    int t, n, cases = 0;
    char name[50];

    scanf("%d", &t);

    while(t--){
        scanf(" %d %s", &n, name);

        if(strcmp(name, "Alice") == 0){
            if(n % 2 == 1){
                printf("Case %d: Alice\n", ++cases);
            } else {
                printf("Case %d: Bob\n", ++cases);
            }
        } else {
            if(n % 2 == 0){
                printf("Case %d: Alice\n", ++cases);
            } else {
                printf("Case %d: Bob\n", ++cases);
            }
        }
    }
    return 0;
}

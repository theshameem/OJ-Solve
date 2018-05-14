/*
    Solved!
    Time: 05:56:41 PM
    Date: 12-05-18
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int n, t, i;

    scanf("%d %d", &n, &t);

    char str[n];
    scanf(" %s", str);

    for(i = 0; i < n; i++){
        //--t;
        if(str[i] == 'B' && str[i + 1] == 'G'){
            swap(str[i], str[i + 1]);
            --t;
        }

        if(t == 0){
            break;
        }
    }

    printf("%s\n", str);

    return 0;
}

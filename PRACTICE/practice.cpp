#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int n, div = 2, test = 0, cp = 0;

    scanf("%d", &n);

    while(n >= cp){
        cp = div;
        div *= div;
        test++;
    }

    printf("%d\n", test + 1);

    return 0;
}
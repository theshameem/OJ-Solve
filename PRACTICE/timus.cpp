#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int long long n;

    int arr[10] = {10, 670, 46991};

    scanf("%lld", &n);

    printf("%lld\n", arr[(n / 2) - 1]);

    return 0;
}

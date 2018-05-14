#include <bits/stdc++.h>

using namespace std;

int long long a, b, c, d, e, f;

int fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    return( fn(n-1) % 10000007 + fn(n-2) % 10000007 + fn(n-3) % 10000007 + fn(n-4) % 10000007 + fn(n-5) % 10000007 + fn(n-6) % 10000007 );
}

int main() {
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int long long n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
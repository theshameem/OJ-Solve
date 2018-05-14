/*
	Solved!
	Date: 10-04-18
	Time: 03:32:41 PM
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t, m, n, cases = 0, result;

	scanf("%d", &t);

	while(t--){
		scanf("%d %d", &m, &n);

		if(m == 1 || n == 1){
			if(m > n){
				result = m;
			} else {
				result = n;
			}
		} else if (m == 2){
			if(n == 2){
				result = 4;
			} else {
				if(n % 4 != 0){
					result = (m * (n / 2)) + 2;
				}
			}
		} else if (n == 2){
			if(m == 2){
				result = 4;
			} else {
				if(m % 4 != 0){
					result = (n * (m / 2)) + 2;
				}
			}
		} else {
			result = (m * n) / 2;

			if(m % 2 == 1 && n % 2 == 1){
				result += 1;
			}
		}

		printf("Case %d: %d\n", ++cases, result);
	}

	return 0;
}

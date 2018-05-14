/*
	Solved
	Date: 14-04-18
	Time: 02:06:18 AM
*/

#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;

int divisor(char a[], long long int b){
	int len1 = strlen(a);
	long long int i, a1 = 0, b1 = 0;

	b1 = abs(b);

	for(i = 0; i < len1; i++){
		if(a[i] == '-'){
			continue;
		}
		a1 *= 10;
		a1 += a[i] - '0';
		a1 = a1 % b;
	}

	a1 = a1 % b;

	if(a1 % b1 == 0){
		return 1;
	} else {
		return 2;
	}
}

int main(){
	freopen("in_1214.txt", "r", stdin);
	freopen("out_1214.txt", "w", stdout);

	int t, cases = 0;
	char a[5000];
	long long int b;

	scanf("%d", &t);

	while(t--){
		scanf("%s %lld", a, &b);
		b = abs(b);
		if(divisor(a, b) == 1){
			printf("Case %d: divisible\n", ++cases);
		} else {
			printf("Case %d: not divisible\n", ++cases);
		}
	}

	return 0;
}
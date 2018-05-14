/*
	Solved!
	Time: 10:13:15
	Date: 10-04-18
*/

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){

	int n, biggest = 0, sum = 0, result;

	scanf("%d", &n);

	int arr[n];

	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	int sum2 = 0;
	if(sum % 2 == 0){
		sum /= 2;
	} else {
		sum /= 2;
		sum++;
	}
	for(int j = 0; j < n; j++){
		sum2 += arr[j];

		if(sum2 >= sum){
			result = j + 1;
			break;
		}
	}
	printf("%d\n", result);

	return 0;
}
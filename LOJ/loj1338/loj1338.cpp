/*
	Solved!
	Date: 14-04-18
	Time: 05:44:51 PM
*/
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int hiddenSecret (char str[], char str1[]){
	int len1, len2, sum1 = 0, sum2 = 0;

	len1 = strlen(str);
	len2 = strlen(str1);

	for(int i = 0; i < len1; i++){
		if(str[i] == ' '){
			continue;
		}

		if(str[i] >= 65 && str[i] <= 90){
			str[i] += 32;
		}

		sum1 += str[i];
	}

	for(int i = 0; i < len2; i++){
		if(str1[i] == ' '){
			continue;
		}

		if(str1[i] >= 65 && str1[i] <= 90){
			str1[i] += 32;
		}
		sum2 += str1[i];
	}

	if(sum1 == sum2){
		return 1;
	} else {
		return -1;
	}
}

int main(){
	freopen("in_1338.txt", "r", stdin);
	freopen("out_1338.txt", "w", stdout);

	int t, cases = 0;

	char name1[500];
	char name2[500];

	scanf("%d", &t);

	while(t--){
		scanf(" %[^\n]", name1);
		scanf(" %[^\n]", name2);

		if(hiddenSecret(name1, name2) == 1){
			printf("Case %d: Yes\n", ++cases);
		} else {
			printf("Case %d: No\n", ++cases);
		}
 	}

	return 0;
}

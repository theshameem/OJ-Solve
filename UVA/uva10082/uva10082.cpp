/*
	Solved!
	Date: 13-04-18
	Time: 11:33:06
*/
#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	freopen("in_uva10082.txt", "r", stdin);
	freopen("out_uva10082.txt", "w", stdout);

	char str[5000] = "`1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
	char input[5000];

	while(gets(input)){
		int len = strlen(str);
		int len2 = strlen(input);

		for(int i = 0; i < len2; i++){
			if(input[i] == ' '){
				printf(" ");
			} else if (input[i] == '\\'){
				printf("]");
			} else {
				for(int j = 0; j < len; j++){
					if(input[i] == str[j]){
						printf("%c", str[j - 1]);
						break;
					}
				}	
			}
		}
		printf("\n");
	}

	return 0;
}

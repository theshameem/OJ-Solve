/*
	Solved!
	Date: 10-04-18
	Time: 10:50:36 AM
*/

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
	/*freopen("in_uva483.txt", "r", stdin);
	freopen("out_uva483.txt", "w", stdout);
*/
    char word[5000];
	

	while(scanf(" %[^\n]", word) != EOF){
		int len = strlen(word);
		int m = 0;
		for(int i = 0; i < len; i++){
			if(word[i] == ' ' || i == len - 1){
				for(int j = i; j >= m; j--){
					if(word[j] != ' '){
						printf("%c", word[j]);						
					}
				}
				if(i < len - 1){
					printf(" ");					
				}
				m = i + 1;
			}
		}
		printf("\n");
	}

	return 0;
}

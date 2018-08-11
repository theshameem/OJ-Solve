/* 
    J 
    AC
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char sentence[20000];
    char res[20000];
    ll len, max = 0, i = 0, cnt;
    while(scanf(" %s", sentence)){
        if(strcmp(sentence, "E-N-D") == 0){
            break;
        }

        cnt = 0;
        len = strlen(sentence);

        for(i = 0; i < len; i++){
            if((sentence[i] >= 48 && sentence[i] <= 57) || (sentence[i] >= 65 && sentence[i] <= 90) || (sentence[i] >= 97 && sentence[i] <= 122) || sentence[i] == '-'){
                ++cnt;
            }
        }
        if(cnt > max){
            max = cnt;
            strcpy(res, sentence);
        }
    }

    len = strlen(res);
    for(i = 0; i < len; i++){
        if((res[i] >= 48 && res[i] <= 57) ||(res[i] >= 65 && res[i] <= 90) || (res[i] >= 97 && res[i] <= 122) || res[i] == '-'){
            if((res[i] >= 65 && res[i] <= 90)){
                printf("%c", res[i] + 32);
            } else {
                printf("%c", res[i]);
            }
        }
    }
    cout << endl;

    return 0;
}

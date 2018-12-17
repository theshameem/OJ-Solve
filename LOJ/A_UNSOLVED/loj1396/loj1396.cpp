/*
    Corner cases: 99, 999, 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll tc, i, j, cases = 0, len;

    scanf("%lld", &tc);

    while(tc--){
        string num;
        cin >> num;

        len = num.size();
        //char res[len];
        printf("Case %lld: ", ++cases);
        if(len % 2 == 1){
            if(len == 1){
                if(num[0] == '9'){
                    cout << "101" << endl;
                } else {
                    num[0] = num[0] + 1;
                    cout << num << endl;
                }
                continue;
            }
            j = len - 1;
            bool flag = false;
            for(i = 0; i < (len / 2); i++){
                if(num[i] > num[j]) flag = true;
                num[j--] = num[i];
            }
            if(! flag){
                num[j] = num[j] + 1; //ekhane jhamela ache :|
            }
        } else {
            j = len - 1;
            for(i = 0; i < (len / 2) - 1; i++){
                num[j--] = num[i];
            }
            if(num[j] < num[j - 1]){
                num[j] = num[j - 1];
            } else if(num[j] == num[j - 1]){
                num[j] = num[j] + 1;
                num[j - 1] = num[j - 1] + 1;
            } else {
                num[j - 1] = num[j - 1] + 1;
                num[j] = num[j - 1];
            }
        }

        cout << num << endl;
        //printf("%s\n", num);
    }

    return 0;
}

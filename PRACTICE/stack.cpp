#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main(){
    freopen("prInput.txt", "r", stdin);
    freopen("prOutput.txt", "w", stdout);

    int t, cases = 0;

    scanf("%d", &t);

    while(t--){
        char str[500];
        char url[500];

        stack<string> back;
        stack<string> forward;

        back.push("http://www.lightoj.com/");
        int flag = 0;
        
        while(1){
            scanf(" %s", str);

            if(!flag) {
                printf("Case %d:\n", ++cases);
                flag = 1;
            }
            if(str[0] == 'V'){
                scanf(" %s", url);

                back.push(url);
                cout << back.top() << endl;

                while(!forward.empty()) forward.pop();
            } else if (str[0] == 'F'){
                if(forward.empty()){
                    printf("Ignored\n");
                } else {
                    
                }
            } else if (str[0] == 'B'){
                if(back.empty()){
                    printf("Ignored\n");
                } else {
                    
                }
            } else {
                break;
            }
        }
    }

    return 0;
}

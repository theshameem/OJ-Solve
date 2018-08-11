/*
    Solved!
    Time: 02:03:51 PM
    Date: 01-06-18
*/
#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, cases = 0;

    scanf("%d", &t);

    while(t--){
        char str[500];
        char url[500];
        stack<string> back;
        stack<string> forward;

        back.push("http://www.lightoj.com/");
        forward.push("http://www.lightoj.com/");
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

                forward.push(back.top());
            } else if (str[0] == 'F'){
                forward.pop();
                if(forward.empty()){
                    printf("Ignored\n");
                    forward.push(back.top());
                } else {
                    back.push(forward.top());
                    cout << forward.top() << endl;
                }
            } else if (str[0] == 'B'){
                back.pop();
                if(back.empty()){
                    printf("Ignored\n");
                    back.push("http://www.lightoj.com/");
                } else {
                    forward.push(back.top());
                    cout << back.top() << endl;
                    
                }
            } else {
                break;
            }
        }
    }

    return 0;
}

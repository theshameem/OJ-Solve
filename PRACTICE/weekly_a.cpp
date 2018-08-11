/*
    Contest time solved.
    date: 06-07-18
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int cases = 0;
    char str[20];

    while(1){
        scanf(" %s", str);

        if(strcmp(str, "#") == 0) break;

        printf("Case %d: ", ++cases);
        if(strcmp(str, "HELLO") == 0){
            cout << "ENGLISH" << endl;
        } else if (strcmp(str, "HOLA") == 0){
            cout << "SPANISH" << endl;
        } else if(strcmp(str, "HALLO") == 0){
            cout << "GERMAN" << endl;
        } else if (strcmp(str, "BONJOUR") == 0){
            cout << "FRENCH" << endl;
        } else if(strcmp(str, "CIAO") == 0){
            cout << "ITALIAN" << endl;
        } else if (strcmp(str, "ZDRAVSTVUJTE") == 0){
            cout << "RUSSIAN" << endl;
        } else {
            cout << "UNKNOWN" << endl;
        }
    }
    return 0;
}

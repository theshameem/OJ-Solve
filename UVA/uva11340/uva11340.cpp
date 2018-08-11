/*
    Solved!
    Time: 03:33:30 PM
    Date: 21-06-18
*/
#include <bits/stdc++.h>
#include <string>
#include <map>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int tc, i, j, cnt = 0, t, k;

    scanf("%d ", &tc);

    while(tc--){
        scanf("%d", &t);
        map <char, double> newspaper;
        map <char, double> :: iterator it;

        char c;
        double val;
        int tStr, len;
        double total = 0;
        string str;

        for(i = 0; i < t; i++){
            scanf(" %c %lf", &c, &val);
            newspaper[c] = val;
        }
        scanf(" %d ", &tStr);

        for(i = 0; i < tStr; i++){
            getline(cin, str);
            len = str.size();

            for(j = 0; j < len; j++){
                it = newspaper.find(str[j]);
                if(it != newspaper.end()){
                    total += it->second;
                }
            }
        }
        printf("%.2lf$\n", total / 100.0);
        newspaper.clear();
    }
    return 0;
}

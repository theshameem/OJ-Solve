/*
    Backtracking chara impossible
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string num;

    while(cin >> num){
        ll len = num.size(), i, j, k = 0;
        string result;

        map<string, int> mymap;
        map<string, int> :: iterator it;
        
        for(i = 0; i < len; i++){
            if(num[i] == num[i + 1] && num[i] == num[i + 2] && num[i + 3] == '0'){
                cout << num[i] << num[i + 1];
                cout << " " << num[i + 2] << num[i + 3];
                i += 3;
                if(! (i >= len - 1)){
                    cout << " ";
                } else {
                    cout << endl;
                }
                continue;
            }

            result += num[i];
            it = mymap.find(result);
            //cout << result << endl;
            if(it != mymap.end() || num[i + 1] == '0'){
                result += num[i + 1];
                ++i;
                if(num[i + 1] == '0')   ++i;
                mymap[result]++;
                cout << result;
                if(! (i >= len - 1)){
                    cout << " ";
                }
                result.clear();
                continue;
            }
            mymap[result]++;
            cout << result;
            if(i < len - 1){
                cout << " ";
            }
            result.clear();
        }
        cout << endl;
    }
    return 0;
}

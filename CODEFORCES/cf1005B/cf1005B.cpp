/*
    Solved!
    Time: 12:58:21 PM
    Date: 10-07-18
*/
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
typedef long long int ll;
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str1;
    string str2;

    cin >> str1 >> str2;
    ll len1, len2, total_len, x = 0, total = 0, i = 0, cnt = 0;

    len1 = str1.size();
    len2 = str2.size();
    total_len = len1 + len2;

    if(len1 > len2){
        for(i = len1 - 1; i >= 0; i--){
            if(str1[i] == str2[--len2]){
                cnt += 2;
                continue;
            } else {
                break;
            }
        }
    } else if (len2 > len1){
        for(i = len2 - 1; i >= 0; i--){
            if(str2[i] == str1[--len1]){
                cnt += 2;
                continue;
            } else {
                break;
            }
        }
    } else {
        for(i = len1 - 1; i >= 0; i--){
            if(str1[i] == str2[i]){
                cnt += 2;
                continue;
            } else {
                break;
            }
        }
    }

    cout << total_len - cnt << endl;

    return 0;
}
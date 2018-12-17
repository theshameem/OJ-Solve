/*
    Solved!
    Time: 06:27:12 PM
    Date: 19-10-18
*/
#include <bits/stdc++.h>
using namespace std;

void check(char res[100], int divisor, int x);
bool flag = true;
int cnt = 0;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int x, i, j, k, l, m, n, p, t = 0, dividant, divisor;
    char res[100], res2[100];
    
    while(cin >> x && x != 0){
        if(t > 0)   cout << endl;
        ++t;

        int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        cnt = 0;
        flag = true;

        for(i = 0; i < 10; i++){
            for(j = 0; j < 10; j++){
                if(arr[i] == arr[j])    continue;
                for(k = 0; k < 10; k++){
                    if(arr[i] == arr[k] || arr[j] == arr[k])    continue;
                    for(l = 0; l < 10; l++){
                        if(arr[i] == arr[l] || arr[j] == arr[l] || arr[k] == arr[l])    continue;
                        for(m = 0; m < 10; m++){
                            if(arr[i] == arr[m] || arr[j] == arr[m] || arr[k] == arr[m] || arr[l] == arr[m])    continue;
                            
                            divisor = arr[m] + (arr[l] * 10) + (arr[k] * 100) + (arr[j] * 1000) + (arr[i] * 10000);
                            
                            dividant = divisor * x;
                            if(dividant > 98765){
                                flag = false;
                                break;
                            }

                            res[0] = (arr[i] + '0');
                            res[1] = (arr[j] + '0');
                            res[2] = (arr[k] + '0');
                            res[3] = (arr[l] + '0');
                            res[4] = (arr[m] + '0');
                
                            check(res, dividant, x);
                        }
                        if(!flag)    break;
                    }
                    if(!flag)    break;
                }
                if(!flag)    break;
            }
            if(!flag)    break;
        }
        
        flag = true;
        if(cnt == 0){
            cout << "There are no solutions for " << x << "." << endl;
        }
    }
    return 0;
}

void check(char res[100], int divisor, int x){
    string res2 = to_string(divisor);
    bool flag2 = true;

    if(res2.size() < 5 && res[0] == '0')  return;
    
    if(res[0] != res[1] && res[0] != res[2] && res[0] != res[3] && res[0] != res[4] && res[1] != res[2] && res[1] != res[3] && res[1] != res[4] && res[2] != res[3] && res[2] != res[4] && res[3] != res[4]){
        if(res2[0] != res2[1] && res2[0] != res2[2] && res2[0] != res2[3] && res2[0] != res2[4] && res2[1] != res2[2] && res2[1] != res2[3] && res2[1] != res2[4] && res2[2] != res2[3] && res2[2] != res2[4] && res2[3] != res2[4]){
            int len = res2.size();
            for(int i = 0; i < len; i++){
                for(int j = 0; j < 5; j++){
                    if(res2[i] == res[j]){
                        flag2 = false;
                        break;
                    }
                }
                if(!flag2)    break;
            }
            if(flag2 == true){
                if(res2.size() < 5){
                    cout << "0" << res2;
                } else {
                    cout << res2;
                }
                cout << " / ";
                if(strlen(res) < 5){
                    cout << "0" << res;
                } else {
                    cout << res;
                }
                cout << " = " << x << endl;
                ++cnt;   
            }
        }
    }
}
/*
    Solved!
    Time: 09:58:40 AM
    Date: 20-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef struct players p;
struct players{
  string name;
  int attack;
  int defend;
};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int tc, i, j, k, l, m, n, sum, mx, cnt, cases = 0;
    cin >> tc;
    
    while(tc--){
        p player[10];
        sum = 0;
        mx = 0;
        cnt = 0;
        for(i = 0; i < 10; i++){
            cin >> player[i].name >> player[i].attack >> player[i].defend;
        }
        for(i = 0; i < 10; i++){
            for(j = i + 1; j < 10; j++){
                if(player[j].name < player[i].name){
                    swap(player[i], player[j]);
                }
            }
        }
        bool check[10];
        
        for(i = 0; i < 10; i++){
            for(j = 0; j < 10; j++){
                if(i == j)  continue;
                for(k = 0; k < 10; k++){
                    if(k == i || k == j)  continue;
                    for(l = 0; l < 10; l++){
                        if(l == i || l == j || l == k)  continue;
                        for(m = 0; m < 10; m++){
                            if(m == i || m == j || m == k || m == l)  continue;
                            sum = player[i].attack + player[j].attack + player[k].attack + player[l].attack + player[m].attack;
                            if(sum > mx){
                                mx = sum;
                                memset(check, false, sizeof(check));
                                check[i] = true;
                                check[j] = true;
                                check[k] = true;
                                check[l] = true;
                                check[m] = true;
                            }
                        }
                    }
                }
            }
        }
        
        for(i = 0; i < 10; i++){
            if(check[i]){
                for(j = 0; j < 10; j++){
                    if(i == j)  continue;
                    if(!check[j] && player[i].attack == player[j].attack && player[i].defend > player[j].defend){
                        check[i] = false;
                        check[j] = true;
                        i = 0;
                        break;
                    } else if (!check[j] && player[i].attack == player[j].attack && player[i].defend == player[j].defend && player[j].name < player[i].name){
                        check[i] = false;
                        check[j] = true;
                        i = 0;
                        break;
                    }
                }
            }
        }
        
        printf("Case %d:\n(", ++cases);
        for(i = 0; i < 10; i++){
            if(check[i]){
                ++cnt;
                if(cnt == 5){
                    cout << player[i].name << ")" << endl;
                    break;
                }
                cout << player[i].name << ", ";
            }
        }
        cnt = 0;
        printf("(");
        for(i = 0; i < 10; i++){
            if(!check[i]){
                ++cnt;
                if(cnt == 5){
                    cout << player[i].name << ")" << endl;
                    break;
                }
                cout << player[i].name << ", ";
            }
        }
    }
    
    return 0;
}
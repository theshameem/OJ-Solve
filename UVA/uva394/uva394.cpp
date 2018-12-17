/*
    Solved!
    Time: 11:37:09 PM
    Date: 02-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct reference {
    string name;
    ll base, dimention, size_of_each_elements;
};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll number_of_elements, cal_elements, i, j, k, m = 0, res, di_val, l, t;

    cin >> number_of_elements >> cal_elements;
    
    struct reference elements[number_of_elements];
    ll store_c[number_of_elements][20];

    for(i = 0; i < number_of_elements; i++){
        cin >> elements[i].name >> elements[i].base >> elements[i].size_of_each_elements >> elements[i].dimention;
        ll pairs[elements[i].dimention][2];
        for(j = 0; j < elements[i].dimention; j++){
            for(k = 0; k < 2; k++){
                cin >> pairs[j][k];
            }
        }

        ll value_of_c[elements[i].dimention + 1];
        
        value_of_c[elements[i].dimention] = elements[i].size_of_each_elements;
        
        for(k = elements[i].dimention - 1; k >= 1; k--){
            value_of_c[k] = value_of_c[k + 1] * (pairs[k][1] - pairs[k][0]  + 1);
        }

        value_of_c[0] = elements[i].base;
        j = 1;

        for(k = 0; k < elements[i].dimention; k++){
            value_of_c[0] -= (value_of_c[j] * pairs[k][0]);
            ++j;
        }

        for(k = 0; k <= elements[i].dimention; k++){
            store_c[i][k] = value_of_c[k];
        }
    }

    string out_name;

    for(j = 0; j < cal_elements; j++){
        cin >> out_name;

        for(i = 0; i < number_of_elements; i++){
            if(elements[i].name == out_name){
                res = store_c[i][0];
                l = 1;
                cout << out_name << "[";
                for(k = 0; k < elements[i].dimention; k++){
                    cin >> di_val;
                    res += (di_val * store_c[i][l++]);
                    cout << di_val;
                    if(k < elements[i].dimention - 1){
                        cout << ", ";
                    }
                }
                cout << "] = " << res << endl;
                break;
            }
        }
    }
    return 0;
}

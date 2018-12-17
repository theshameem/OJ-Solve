/*
    Solved!
    Time: 07:18:39 AM
    Date: 29-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);    

    ll chambers, specimen, i, j, cases = 0, mx = 0, x = 0;

    while(cin >> chambers >> specimen){
        ll s_arr[specimen], cpy_arr[specimen], sum = 0, cnt = 0, num;

        for(i = 0; i < specimen; i++){
            cin >> s_arr[i];
            cpy_arr[i] = s_arr[i];
            sum += s_arr[i];
            if(s_arr[i] > mx)   mx = s_arr[i];
        }

        sort(cpy_arr, cpy_arr + specimen);
        double imbalance = 0, average = (sum * 1.0) / chambers;
        printf("Set #%lld\n", ++cases);

        vector <pair <ll, ll>> v;

        if(specimen <= chambers){
            for(i = 0; i < chambers; i++){
                if(i < specimen){
                    printf(" %lld: %lld\n", i, s_arr[i]);                    
                    imbalance += abs(s_arr[i] - average);
                    continue;
                }
                imbalance += average;
                printf(" %lld:\n", i);
            }
            printf("IMBALANCE = %.5lf\n", imbalance);
            cout << endl;
            continue; //it works fine.
        } else if(chambers * 2 == specimen){
            j = specimen - 1;
            for(i = 0; i < specimen / 2; i++){
                 v.push_back(make_pair(cpy_arr[i], cpy_arr[j]));
                 --j;
            }

            for(i = 0; i < specimen; i++){
                ll search_val;
                bool flag = false;
                if(s_arr[i] != 0){
                    search_val = s_arr[i];
                } else {
                    continue;
                }

                for(j = 0; j < chambers; j++){
                    if(search_val == v[j].first){
                        printf(" %lld: %lld %lld\n", cnt++, search_val, v[j].second);
                        flag = true;
                        num = v[j].second;
                        imbalance += abs((search_val + num) - average);
                        s_arr[i] = 0;
                        v[j].first = 0;
                        v[j].second = 0;
                        break;
                    } else if (search_val == v[j].second){
                        printf(" %lld: %lld %lld\n", cnt++, search_val, v[j].first); 
                        flag = true;
                        num = v[j].first;
                        imbalance += abs((search_val + num) - average);
                        s_arr[i] = 0;
                        v[j].first = 0;
                        v[j].second = 0;
                        break;
                    }
                }

                for(ll m = 0; m < specimen; m++){
                    if(s_arr[m] == num){
                        s_arr[m] = 0;
                        break;
                    }
                }
            }
            printf("IMBALANCE = %.5lf\n", imbalance); //it works fine.
        } else {
            ll two_ele, one_ele;
            two_ele = (specimen % chambers);
            one_ele = specimen - (two_ele * 2);
            ll mx_arr[20], w = 0;

            for(i = specimen - 1; w < one_ele; i--){
                mx_arr[w++] = cpy_arr[i];
            }
            j = specimen - (one_ele + 1);
            for(i = 0; i < (specimen - one_ele) / 2; i++){
                v.push_back(make_pair(cpy_arr[i], cpy_arr[j]));
                --j;
            }
            for(i = 0; i < specimen; i++){
                ll search_val;
                if(s_arr[i] != 0){
                    search_val = s_arr[i];
                } else {
                    continue;
                }

                ll u = 0;
                for(ll h = 0; h < w; h++){
                    u = 0;
                    if(s_arr[i] == mx_arr[h]){
                        printf(" %lld: %lld\n", cnt++, s_arr[i]);
                        imbalance += abs(s_arr[i] - average);
                        u = 1;
                        s_arr[i] = 0;
                        mx_arr[h] = 0;
                        break;
                    }
                }
                if(u == 1)  continue;

                for(j = 0; j < specimen; j++){
                    if(search_val == v[j].first){
                        printf(" %lld: %lld %lld\n", cnt++, search_val, v[j].second);
                        num = v[j].second;
                        imbalance += abs((search_val + num) - average);
                        s_arr[i] = 0;
                        v[j].first = 0;
                        v[j].second = 0;
                        break;
                    } else if (search_val == v[j].second){
                        printf(" %lld: %lld %lld\n", cnt++, search_val, v[j].first); 
                        num = v[j].first;
                        imbalance += abs((search_val + num) - average);
                        s_arr[i] = 0;
                        v[j].first = 0;
                        v[j].second = 0;
                        break;
                    }
                }

                for(ll m = 0; m < specimen; m++){
                    if(s_arr[m] == num){
                        s_arr[m] = 0;
                        break;
                    }
                }
            }
            printf("IMBALANCE = %.5lf\n", imbalance);
        }
        cout << endl;
    }
    return 0;
}

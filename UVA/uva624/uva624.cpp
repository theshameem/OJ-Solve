/*
    Solved!
    Time: 09:58:00 PM
    Date: 24-10-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector <ll> v1, v2, res_elements;
ll total = 0, dif, n, mx, t;

void subset(ll pos){
    ll res = 0;
    if(pos == t){
        for(ll i = 0; i < v2.size(); i++) {
            res += v2[i];
        }
        if(res >= mx && res <= n){
            res_elements.clear();
            for(ll i = 0; i < v2.size(); i++){
                res_elements.push_back(v2[i]);
                //cout << v2[i] << endl;
            }
            mx = res;
        }
        return;
    }
    subset(pos + 1);
    v2.push_back(v1[pos]);
    subset(pos + 1);
    v2.pop_back();
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    while(cin >> n >> t){
        ll x, i, j, m, w;
        for(i = 0; i < t; i++){
            cin >> x;
            v1.push_back(x);
            total += x;
        }
        mx = 0;
        subset(0);
        w = res_elements.size();
        //cout << w << endl;
        bool elements[t];
        memset(elements, false, sizeof(elements));
        for(i = 0; i < w; i++){
            for(j = 0; j < t; j++){
                if(res_elements[i] == v1[j]){
                    elements[j] = true;
                    break;
                }
            }
        }
        m = 0;
        for(j = 0; j < t; j++){
            if(elements[j] == true){
                cout << v1[j];
                ++m;
            }
            if(m == w){
                printf(" sum:%lld\n", mx);
                //cout << " " << "sum:" << mx << endl;
                break;
            } else if (elements[j] == true) {
                printf(" ");
                //cout << " ";
            }
        }
        
        //cout << mx << endl;
        v1.clear();
        v2.clear();
        res_elements.clear();
    }
    return 0;
}

/*
    Solved!
    Time: 11:10:39 PM
    Date: 06-12-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct axis{
    ll x, y;
};

bool cmp(axis p, axis r){
    return p.x < r.x;
}

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);    

    ll tc, total, m, x, y, k, i, j, cnt, l, t = 0, tmp, w, mx, xx, yy, idx;
    cin >> tc;

    while(tc--){
        cin >> m;
        struct axis give[100000];
        struct axis res[100000];
        bool track[1000000];
        
        memset(track, true, sizeof(track));

        if(t > 0)   cout << endl;
        ++t;

        k = 0;
        //Read input
        while(cin >> x >> y){
            if(x == 0 && y == 0)    break;

            give[k].x = x;
            give[k].y = y;
            ++k;
        }

        //sort the axixes
        sort(give, give + k, cmp);

        //Result Generating
        i = 0, tmp = 0, idx = 0, w = 0, yy, mx = -9999999999;
        while(give[i].x <= 0 && i < k){
            if(give[i].y > mx){
                mx = give[i].y;
                w = i;
            }
            ++i;
            tmp = 1;
            if(mx >= m) break;
        }

        if(tmp == 0){
            cout << 0 << endl;
            continue;
        } else if (mx < m){
            --i;
            res[idx++] = give[w];
            for(i; i < k; i++){
                yy = mx, tmp = 0;
                mx = give[w].y;
                while(give[i].x <= mx && i < k){
                    if(give[i].y > yy){
                        yy = give[i].y;
                        w = i;
                    }
                    tmp = 1;
                    ++i;
                    if(yy >= m) break;
                }
                if(tmp == 0){
                    idx = -1;
                    break;
                }
                mx = yy;
                res[idx++] = give[w];
                --i;
                if(yy >= m) break;
                if(i == k - 1){
                    idx = -1;
                }
            }
        } else {
            res[idx++] = give[w];
        }

        //Result printing
        if(idx == -1){
            cout << 0 << endl;
            continue;
        }
        cout << idx << endl;
        for(i = 0; i < idx; i++){
            cout << res[i].x << " " << res[i].y << endl;
        }
    }
    
    return 0;
}

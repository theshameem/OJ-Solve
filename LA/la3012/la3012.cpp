/*
    Solved!
    Time: 04:58:59 AM
    Date: 12-08-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n, x, i, sum, res, rem, up, sres, down, cases = 0, downsize, upsize, m, flg, take;

    while(cin >> n){
        if(n == 0){
            break;
        }
        sum = 0;
        for(i = 0; i < n; i++){
            cin >> x;
            sum += x;
        }

        res = sum / n;
        rem = sum % n;
        m = abs(rem);

        printf("Case %lld:\n", ++cases);
        if(m == 0){
            if(res < 0) cout << "- ";
            cout << abs(res) << endl;
            continue;
        }
        if(res == 0){
            flg = 0;
            up = m;
            down = n;
            for(i = up; i > 1; i--){
                if(up % i == 0 && down % i == 0){
                    up /= i;
                    down /= i;
                    break;
                }
            }
            downsize =  (to_string(down)).size();
            x = downsize;
            if(rem < 0){
                ++x;
            }
            while(--x){
                cout << " ";
            }
            cout << up << endl;
            while(downsize--){
                cout << "-";
            }
            if(rem < 0){
                cout << "- ";
            }
            cout << endl;
            upsize = (to_string(up)).size();
            if(rem < 0){
                ++upsize;
            }
            while(--upsize){
                cout << " ";
            }
            cout << down << endl;
            continue;
        }

        up = m;
        down = n;
        flg = 0;
        for(i = up; i > 1; i--){
            if(up % i == 0 && down % i == 0){
                up /= i;
                down /= i;
                break;
            }
        }

        downsize = to_string(down).size();
        upsize = to_string(up).size();
        sres = to_string(res).size();
        take = max(sres, downsize);
        take += (downsize - upsize);
        if(downsize > sres){
            take = (downsize - upsize) + sres;
        }
        if(res < 0) ++take;
        while(take--){
            cout << " ";
        }
        cout << up << endl;
        if(res < 0){
            cout << "- ";
        }
        cout << abs(res);
        take = max(upsize, downsize);
        while(take--){
            cout << "-";
        }
        cout << endl;
        take = sres;
        if(res < 0) ++take;
        while(take--){
            cout << " ";
        }
        cout << down << endl;
    }
    return 0;
}
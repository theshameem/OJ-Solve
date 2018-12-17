#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll tc, x, y, i, j, cnt, pos_x, pos_y, cases = 0, len, ans_x, ans_y;

    cin >> tc;

    while(tc--){
        string str;
        bool track[64][64];
        cin >> x >> y >> str;
        ans_x = x, ans_y = y;
        len = str.size(), cnt = 0;

        //initializing all points as true
        for(i = 0; i < 64; i++){
            for(j = 0; j < 64; j++){
                track[i][j] = 0;
            }
        }

        //Result generating
        for(i = 0; i < len; i++){
            if(str[i] == 'R'){
                ++i;
                while(str[i] == 'F'){
                    
                }
            } else if (str[i] == 'L'){
                //eta niye kaj korte hobe.
                ++i;
                while(str[i] == 'F'){
                    //ans_y++;
                    i++;
                }
                --i;
                pos_x = ans_x, pos_y = ans_y;
            } else {
                track[ans_x][ans_y] = 1;
                //cout << ans_x << " " << ans_y << endl;
                while(str[i] == 'F'){
                    ans_y++;
                    track[ans_x][ans_y] = 1;
                    pos_x = ans_x, pos_y = ans_y;
                    cout << ans_x << " " << ans_y << endl;
                    i++;
                }
                --i;
            }
        }
        cout << ans_x << " " << ans_y << " " << cnt << endl;
    }

    return 0;
}

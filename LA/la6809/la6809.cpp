/*
    Solved!
    Time: 05:49:32 PM
    Date: 28-11-18
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string hex_binary(string n1);
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll tc, cases = 0, i, j, sz1, sz2, cnt1, cnt2, side;

    cin >> tc;

    while(tc--){
        string n1, n2, cpy;
        cin >> n1 >> n2;

        n1 = hex_binary(n1);
        n2 = hex_binary(n2);
        sz1 = n1.size();
        sz2 = n2.size();
        
        if(sz1 < 32){
            cpy = n1;
            n1.clear();
            for(i = 0; i < 32 - sz1; i++){
                n1 += '0';
            }
            n1 += cpy;
        }
        if(sz2 < 32){
            cpy = n2;
            n2.clear();
            for(i = 0; i < 32 - sz2; i++){
                n2 += '0';
            }
            n2 += cpy;
        }

        side = 32, cnt1 = 0;
        cpy = n1;
        string ch;

        while(side--){
            if(n1 == n2)    break;
            ch = n1[31];

            n1.pop_back();
            n1.insert(0, ch);
            ++cnt1;
        }

        side = 32, cnt2 = 0;
        n1 = cpy;
        ch.clear();

        while(side--){
            if(n1 == n2)    break;
            ch = n1[0];

            n1.erase(n1.begin() + 0);
            n1.insert(31, ch);
            ++cnt2;
        }
        printf("Case #%lld: ", ++cases);
        if(n1 == n2){
            if(cnt1 == cnt2){
                cout << cnt1 << " Any" << endl;
            } else if (cnt1 < cnt2){
                cout << cnt1 << " Right" << endl;
            } else {
                cout << cnt2 << " Left" << endl;
            }
        } else {
            cout << "Not possible" << endl;
        }

        
        //cout << cnt1 << " " << cnt2 << endl;
        //cout << n1 << " " << n2 << endl;   
    }
    return 0;
}
string hex_binary(string n1){
    string res;
    ll i = 0;
    while(n1[i]){
        switch(n1[i]){
            case '0': res += "0000"; break;
            case '1': res += "0001"; break;
            case '2': res += "0010"; break;
            case '3': res += "0011"; break;
            case '4': res += "0100"; break;
            case '5': res += "0101"; break;
            case '6': res += "0110"; break;
            case '7': res += "0111"; break;
            case '8': res += "1000"; break;
            case '9': res += "1001"; break;
            case 'A': res += "1010"; break;
            case 'B': res += "1011"; break;
            case 'C': res += "1100"; break;
            case 'D': res += "1101"; break;
            case 'E': res += "1110"; break;
            case 'F': res += "1111"; break;
            case 'a': res += "1010"; break;
            case 'b': res += "1011"; break;
            case 'c': res += "1100"; break;
            case 'd': res += "1101"; break;
            case 'e': res += "1110"; break;
            case 'f': res += "1111"; break;
        }
        i++;
    }
    return res;
}

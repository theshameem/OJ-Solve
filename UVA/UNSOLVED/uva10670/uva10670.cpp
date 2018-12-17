#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Support{
    string agency_name;
    ll price;
};
bool cmp(Support x, Support y){
    if(x.price != y.price){
        return x.price < y.price;
    }
    return x.agency_name < y.agency_name;
}
ll cal_second_way(ll papers, ll remain, ll price, ll y){
    
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);    

    ll tc, i, j, res, papers, remain, agency, reduce, cases = 0, x, y, z, f_way, s_way;

    cin >> tc;

    while(tc--){
        cin >> papers >> remain >> agency;
        struct Support given[agency];
        string c;
        char ch;
        reduce = papers - remain;
        for(i = 0; i < agency; i++){
            c.clear();
            while(cin >> ch && ch != ':'){
                c += ch;
            }

            scanf(" %lld, %lld", &x, &y);
            f_way = (reduce * x);
            s_way = cal_second_way(papers, remain, y, x);
            if(s_way == 0){
                res = f_way;
                //cout << f_way << endl;
            } else if (f_way == 0){
                res = s_way;
                //cout << s_way << endl;
            } else {
                res = min(f_way, s_way);
                //cout << min(f_way, s_way) << endl;
            }
            //strcpy(given[i].agency_name, c);
            given[i].agency_name = c;
            given[i].price = res;
        }
        sort(given, given + agency, cmp);

        printf("Case %lld\n", ++cases);
        for(i = 0; i < agency; i++){
            //printf("%s ", given[i].agency_name);
            cout << given[i].agency_name << " " << given[i].price << endl;
        }
        //cout << endl;
    }
    
    return 0;
}

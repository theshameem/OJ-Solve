#include <bits/stdc++.h>
using namespace std;

string s; 
int node[400025];

void update(int now, int lo, int hi, int l, int r) {
    if(lo == l && hi == r) {
        node[now]++;
        return;
    }

    int mid = (lo + hi) / 2;
    if(r <= mid) update(now*2, lo, mid, l, r);
    else if(l > mid) update((now*2), mid + 1, hi, l, r);
    else {
        update(now*2, lo, mid, l, mid);
        update((now*2)+1, mid+1, hi, mid+1, r);
    }
}

bool queary(int now, int lo, int hi, int idx) {
    if(lo == idx) {
        if(node[now] & 1) {
            if(s[lo] == '0') s[lo ] = '1';
            else s[lo] = '0';
        }
        node[now] = 0;

        return (s[lo] == '1');
    }

    if(node[now]) {
        node[now * 2] += node[now];
        node[(now * 2) + 1] += node[now];
        node[now] = 0;
    } 

    int mid = (lo + hi) / 2;
    if(idx <= mid) return queary(now*2, lo, mid, idx);
    else return queary((now*2)+1, mid+1, hi, idx);
}


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t; cin >> t;
    while(t--){
        // break;
        memset(node, 0, sizeof node);

        cin >> s;
        int n = s.size();
        s = "0"+s;
    
        int q; cin >> q;
        while(q--) {
    
            char c;
            int x, y;
            cin >> c;
            
            if(c == 'I') {
                int x, y; cin >> x >> y;
                update(1, 1, n, x, y);
            }
            else {
                cin >> x;
                cout << queary(1, 1, n, x) << endl;
            }
    
        }
    }
    cout << "hello" << endl;
    return 0;
}
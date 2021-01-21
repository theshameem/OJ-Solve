#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
typedef vector<int>         vi;
typedef vector<ll>          vll;

#define READ()              freopen("input.txt", "r", stdin)
#define WRITE()             freopen("output.txt", "w", stdout)

vector<int> v[10];
int dist[10];
int vis[10];

void BFS(int source){
    queue<int> q;
    q.push(source);
    dist[source] = 0;
    vis[source] = 1;

    while(! q.empty()){
        int p = q.front();
        q.pop();
        for(int i = 0; i < v[p].size(); i++){
            if(vis[v[p][i]] == 0){
                dist[v[p][i]] = dist[p] + 1;
                q.push(v[p][i]);
                vis[v[p][i]] = 1;
            }
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        v[1] = {2, 3, 4};
        v[2] = {1, 5, 6};
        v[3] = {1, 6};
        v[5] = {2, 7, 8};
        v[6] = {2, 3};
        
        BFS(6);
        for(int i = 1; i <= 8; i++) cout <<i << " -> " << dist[i] << endl;
 
    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
#define MAXN                10
#define READ()              freopen("input.txt", "r", stdin)
#define WRITE()             freopen("output.txt", "w", stdout)

int parent[MAXN];
void initSet(){
	for(int i = 1; i <= MAXN; i++) parent[i] = i;
}

int findParent(int a){
	if(parent[a] == a) return a;
	return parent[a] = findParent(parent[a]);
}

void unionSet(int a, int b){
	int u = findParent(a);
	int v = findParent(b);
	//if(u == v) return;
	parent[u] = v;
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        initSet();
        unionSet(1, 2);
        unionSet(2, 3);
        unionSet(1, 3);

        for(int i = 1; i <= 5; i++) cout << i << " " << parent[i] << endl;

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
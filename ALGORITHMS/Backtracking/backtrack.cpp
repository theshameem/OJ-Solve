#include <bits/stdc++.h>
using namespace std;
int ar[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
int n;
int ans[100];
bool used[100];
 
void bt(int pos){
    if(pos==n){ /// base case
        for(int i=0; i<n; i++){
            printf("%d ", ans[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1; i<=n; i++){
        if(!used[i]){
            ans[pos]=i;
            //used[i]=1;
            bt(pos+1);
            //used[i]=0;
        }
    }
}
 
int main(){
    freopen("output.txt", "w", stdout);
    n=2;
    //bt(0);

    if("Spain" < "Spain") cout << 1 << endl;

    return 0;
}
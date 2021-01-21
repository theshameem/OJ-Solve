vector<ll> prime;
bool mark[100000000];
void sieve(int n){//lim 2*1e7
    int lim = sqrt(n);
    prime.push_back(2);
    for(int i = 3; i <= n; i += 2){
        if(! mark[i / 2]){
            prime.push_back(i);
            if(i <= lim){
                for(int j = i * i; j <= n; j += (i * 2)) mark[j / 2] = 1;
            }
        }
    }
}

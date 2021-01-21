vector<ll> prime;
bool mark[100000000];
void sieve(ll n){//lim 1e7
    ll lim = sqrt(n * 1.0) + 2;
    for(ll i = 4; i <= n; i += 2)	mark[i]=1;
    prime.push_back(2);
    for(ll i = 3; i <= n;i += 2){
        if(! mark[i]){
            prime.push_back(i);
            if(i < lim){
                for(ll j = i * i; j <= n;j += i * 2)	mark[j] = 1;
            }
        }
    }
}

map<ll,int> prime_factorization(ll n){
    map<ll,int> ret;
    for(int i = 0; (prime[i] * prime[i] <= n && i < prime.size()); i++){
        while(! (n % prime[i])){
            n /= prime[i];
            ret[prime[i]]++;
        }
    }
    if(n > 1)ret[n]++;
    
    return ret;
}

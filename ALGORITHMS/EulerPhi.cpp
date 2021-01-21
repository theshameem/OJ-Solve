//Formula:
// res = n * ((prime[i] / prime[i] - 1) * ((prime[i + 1] / prime[i + 1] - 1) * ((prime[i + k] / prime[i + k] - 1)

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

ll eulerPhi(ll n){
	ll ans = n;
	for(int i = 0; i < prime.size() && prime[i] * prime[i] <= n; i++){
		if(n % prime[i] == 0){
			while(n % prime[i] == 0) n /= prime[i];
			ans /= prime[i];
			ans *= (prime[i] - 1);
		}
	}
	if(n > 1){
		ans /= n;
		ans *= (n - 1);
	}

	return ans;
}



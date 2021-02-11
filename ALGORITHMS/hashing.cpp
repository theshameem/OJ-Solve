******************************* Hashing **********************************

// 7 digit prime
1011001 3109081 4136537 4612717 8288213 6346973 2111309 3907529 2244163 3007241 5992073
1010003 4470911 3379289 3454183 1400261 3613321 3516011 7888207 6134743 5394139 9476743

// 10 digit prime
9123457199 9123457381 9123457663 9123457423 9123457529 9123457529 9123457051 9123457631 9123457117 9123457523
9123457163 9123457663 9123457769 9123457117 9123456791 9123457177 9123457423 9123457769 9123457481 

// 16 difit prime
1737476797107127

// fixed string hash : do double hash
int string_hash(string s, int b, int m) {
    ll ret = 0;
    ll power = 1;
 
    for(char c : s) {
        ret = (ret + (((int)c) * power)) % m;
        power = (power * b) % m;
    }
    return (int)ret;
}
 
// Rabin-karp  | all occerance of pattern in text
vi rabin_karp(string pattern, string text, ll b, ll m) {
    int p = pattern.size(), t = text.size();

    vll power(max(t, p));
    power[0] = 1;

    for(int i = 1; i < power.size(); i++) {
        power[i] = (power[i-1] * b) % m;
    }

    vll text_hash(t + 1);
    for(int i = 0; i < t; i++) {
        text_hash[i+1] = (text_hash[i] + (text[i] - 'a' + 1) * power[i]) % m;
    }

    ll pattern_hash = 0;
    for(int i = 0; i < p; i++) {
        pattern_hash = (pattern_hash + (pattern[i] - 'a' + 1) * power[i]) % m;
    }

    vi occer;

    for(int i = 0; i + p - 1 < t; i++) {
        ll hash = (text_hash[i + p] - text_hash[i] + m) % m;
        
        if(hash == pattern_hash * power[i] % m) {
            occer.push_back(i);
        }
    }
    return occer;
}

// substring match of a string
vl rolling_hash(string txt, ll b, ll m) {
    int t = txt.size();

    vl power(t); power[0] = 1;
    for(int i = 1; i < t; i++) power[i] = (power[i-1] * b) % m;

    vl h(t+1);
    for(int i = 0; i < t; i++) h[i+1] = (h[i] + (txt[i]-'a'+1) * power[i]) % m;

    return h;
}

bool substring_match_by_rolling_hash(int a, int b, int l, vl &h1, vl &h2, vl &power1, vl &power2) {

    ll ah1 = (h1[a+l] + 1400261 - h1[a]) % 1400261;
    ah1 = (ah1 * power1[b-a]) % 1400261;

    ll ah2 = (h2[a+l] + 3613321 - h2[a]) % 3613321;
    ah2 = (ah2 * power2[b-a]) % 3613321;
    
    ll bh1 = (h1[b+l] + 1400261 - h1[b]) % 1400261;
    ll bh2 = (h2[b+l] + 3613321 - h2[b]) % 3613321;

    if(ah1 == bh1 && ah2 == bh2) return 1;
    return 0;
}

// occerance count by rolling hash
inline int occerance(const string &word, const string &text, const ll &b, const ll &m) {

    int w = word.size(), t = text.size();

    vl power(t);
    power[0] = 1;
    for(int i = 1; i < t; i ++) power[i] = (power[i-1] * b) % m;        

    ll wh = 0;
    for(int i = 0; i < w; i++) wh = (wh + (word[i] - 'A' + 1) * power[i]) % m;

    vl th(t+1);
    for(int i = 0; i < t; i++) th[i+1] = (th[i] + (text[i] - 'A' + 1) * power[i]) % m;

    int cnt = 0; 

    for(int i = 0; i+w-1 < t; i++) {
        ll t1_hash = (th[i+w] + m - th[i]) % m;
        ll w1_hash = (wh * power[i]) % m;
        
        if(t1_hash == w1_hash) cnt++;
    }

    return cnt;
}
//**************Updated Hasing************************
// Hashing template ------------------------------------------------------------------------

int base_1, base_2, mod_1, mod_2;
void init_hash() {
    const vi h_primes = {2147462393, 2147462419, 2147462587, 2147462633, 2147462747, 2147463167, 2147463203, 2147463569, 2147463727, 2147463863, 2147464211, 2147464549, 2147464751, 2147465153, 2147465563, 2147465599, 2147465743, 2147465953, 2147466457, 2147466463, 2147466521, 2147466721, 2147467009, 2147467057, 2147467067, 2147467261, 2147467379, 2147467463, 2147467669, 2147467747, 2147468003, 2147468317, 2147468591, 2147468651, 2147468779, 2147468801, 2147469017, 2147469041, 2147469173, 2147469229, 2147469593, 2147469881, 2147469983, 2147470027, 2147470081, 2147470177, 2147470673, 2147470823, 2147471057, 2147471327, 2147471581, 2147472137, 2147472161, 2147472689, 2147472697, 2147472863, 2147473151, 2147473369, 2147473733, 2147473891, 2147473963, 2147474279, 2147474921, 2147474929, 2147475107, 2147475221, 2147475347, 2147475397, 2147475971, 2147476739, 2147476769, 2147476789, 2147476927, 2147477063, 2147477107, 2147477249, 2147477807, 2147477933, 2147478017, 2147478521, 2147478563, 2147478649, 2147479447, 2147479589, 2147480707, 2147480837, 2147480927, 2147480971, 2147481263, 2147481311, 2147481337, 2147481367, 2147481997, 2147482021, 2147482063, 2147482081, 2147482343, 2147482591, 2147483069, 2147483123};
        
    // taking reandom prime as base and mod with seeding
    unsigned int seed = chrono::system_clock::now().time_since_epoch().count();
    srand(seed);  

    int q_len = (h_primes.size() / 4);

    base_1 = h_primes[rand() % q_len];
    mod_1  = h_primes[rand() % q_len + q_len];
    
    base_2 = h_primes[rand() % q_len + 2 * q_len];
    mod_2  = h_primes[rand() % q_len + 3 * q_len];
}

struct SingleHash{
    long long base, mod;
    vector <int> basepow, f_hash, r_hash;

    SingleHash() {}
    SingleHash(const string &str, long long base, long long mod): base(base), mod(mod){
        int len = str.size();
        basepow.resize(len + 3, 1), f_hash.resize(len + 3, 0), r_hash.resize(len + 3, 0);

        for (int i = 1; i <= len; i++){
            basepow[i] = basepow[i - 1] * base % mod;
            f_hash[i] = (f_hash[i - 1] * base + str[i - 1] + 1007) % mod;
        }

        for (int i = len; i >= 1; i--){
            r_hash[i] = (r_hash[i + 1] * base + str[i - 1] + 1007) % mod;
        }
    }

    inline int forward_hash(int l, int r){
        int h = f_hash[r + 1] - ((long long)basepow[r - l + 1] * f_hash[l] % mod);
        return h < 0 ? h + mod : h;
    }

    inline int reverse_hash(int l, int r){;
        int h = r_hash[l + 1] - ((long long)basepow[r - l + 1] * r_hash[r + 2] % mod);
        return h < 0 ? h + mod : h;
    }
};

struct StringHash{
    SingleHash sh1, sh2;

    StringHash(const string &str){

        sh1 = SingleHash(str, base_1, mod_1);
        sh2 = SingleHash(str, base_2, mod_2);
    }

    /// returns the hash of the forward substring from indices l to r (inclusive)
    long long forward_hash(int l, int r){
        return ((long long)sh1.forward_hash(l, r) << 32) ^ sh2.forward_hash(l, r);
    }

    /// returns the hash of the reversed substring from indices l to r (inclusive)
    long long reverse_hash(int l, int r){
        return ((long long)sh1.reverse_hash(l, r) << 32) ^ sh2.reverse_hash(l, r);
    }

    bool isPalin(int l, int r){ return (forward_hash(l,r)==reverse_hash(l,r));}
};
// ---------------------------------------------------------------------------------------
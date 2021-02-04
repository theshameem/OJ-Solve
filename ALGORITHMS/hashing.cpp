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

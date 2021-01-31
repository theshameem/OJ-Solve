/*
* Author : Ahmed Abdullah Shourav
* Mail : ahmed15-898@diu.edu.bd
* Mobile : 8801303206223
*/

/*
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <queue>
#include <bitset>
using namespace std;*/


#include <bits/stdc++.h>
using namespace std;

 
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")


//container
#define ll long long int
#define ul unsigned long
#define ull unsigned long long
#define D double
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector< pii >
#define msi map<string,int>
#define mis map<int,string>
#define sts set<string>
#define sti set<int>

// shortcuts
#define sf                  scanf
#define pf                  printf
#define pb                  push_back
#define pob                 pop_back
#define MP                  make_pair
#define ff                  first
#define ss                  second
#define endl                "\n"
#define all(s)              s.begin(),s.end()
#define unq(s)              sort(all(s)),(s).erase(unique(all(s)),s.end())  
#define clr(x, y)           memset(x, y, sizeof(x))
#define sz(c)               int(c.size())
#define gl(x)               getline(cin,x)
#define sqr(x)              ((x)*(x))
#define loop(i, y)          for(int i=0; i<int(y); i++)
#define FOR(i, x, y)        for(int i=int(x); i<int(y); i++)
#define ROF(i, x, y)        for(int i=int(x-1); i>=int(y); i--)
#define itr                 ::iterator
#define DEBUG(x)            cout << '>' << #x << ':' << x <<"\n";
#define fastio              ios_base::sync_with_stdio(0);cin.tie(0)
#define fileio              freopen("in.txt","r",stdin);freopen("out.txt","w",stdout) 

/// Constants
#define MAX                 10000007
#define MOD                 1000000009
#define base                1000000007
#define eps                 1e-9
#define INF                 1llu<<61    // 2,305,843,009,213,693,952
#define inf                 1<<29       // 536,870,912
#define PI                  acos(-1.0)  // 3.1415926535897932

//Float value compareson
#define FasI(f)  (*((int *) &(f)))
#define FasUI(f) (*((unsigned int *) &(f)))

#define lt0(f)  (FasUI(f) > 0x80000000U)
#define le0(f)  (FasI(f) <= 0)
#define gt0(f)  (FasI(f) > 0)
#define ge0(f)  (FasUI(f) <= 0x80000000U)


//Direction array
//int dr[]={-1,-1,-1,0,1,1, 1, 0};
//int dc[]={-1, 0, 1,1,1,0,-1,-1};
int dr[]={-1,1,0,0,  -1,-1,1,1};
int dc[]={0,0,-1,1,  1,-1,-1,1};

//day of months
vector<string> month = {"","January","February","March","April","May","June","July","August","September","October","November","December"}; 
vector<string> day = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
vector<int> mn = {0,31,28,31,30,31,30,31,31,30,31,30,31};


********************** time tracker**************************
class TimeTracker {
    clock_t start, end;
public:
    TimeTracker() {
        start = clock();
    }
    ~TimeTracker() {
        end = clock();
        fprintf(stderr, "%.3lf s\n", (double)(end - start) / CLOCKS_PER_SEC);
    }
};

*********************** FileIo ****************************
#ifndef ONLINE_JUDGE
    fileio;
#endif

////////////////////////////////////////////////////////////////////////////////////////////////
******************************* Mathematics & Number Theory ********************************
////////////////////////////////////////////////////////////////////////////////////////////////

************************* Logarithm **************************

logk(x^n)=n*logk(x);

logk(a*b) = logk(a) + logk(b);
logk(a/b) = logk(a) - logk(b);

logu(x) = (logk(x))/logk(u);


**************************************************************

*****SUM formulas*****
1 + 2 + 3 + . . . + n = (n + 1)*(n / 2)
1 + 3 + 5 + . . . + n = (n + 1)*(n / 4)
2 + 4 + 6 + . . . + n = (n + 2)*(n / 4)
1^2 + 2^2 + 3^2 + . . . + n^2 = ((2n+1)/3)*(n(n+1)/2)
1^3 + 2^3 + 3^3 + . . . + n^3 = (n^2 * (n + 1)^2) / 4;
1 + 2 + 4 + 8 + . . . . + 2^n-1 = (2^n - 1)
**********************
*****
if ratio between any consecutive number is constent its a geometric prograssion.
ak + ax^2 + ax^3 + b = (bx-a)/(x-1)//a is first and b is last number and x is ratio.
*****
is difference between any consecutive number is constent its a arithmatic prograssion.
a + --- + b = n(a+b)/2//n is difference and a ,b is first & last number.
*****

*****
all number between (1 to n) can be constraced by some sigment of n
minimum sigment = (((2^k)-1)<=n)+1;
*****
if x < (n*(n+1))/2 ... then x could be expressed by sum number smaller then n
*****
output two set of number (1-n) without repiting 
such that sum of any set of element should be 
devided by another set of element.
sol: there is an element which can devide sum of
all element (1-n) except that equally
*****************************************************************

************ Number of latis point between 2 point **************

It is simply GCD(x1−x2,y2−y1).

y−y1   y2−y1
---- = -----
x−x1   x2−x1

Now just switching the positions of these expressions we get:

y−y1    x−x1
---- = -----
y2−y1   x2−x1
                                       y2−y1
Now , y−y1 should be equal to k × ----------------
                                  GCD(y2−y1,x2−x1)

Why ? x should be integer! If we write x in terms of everything else We will see
y−y1 
----  should be Integer.
y2−y1         

Now I say that k1=0 Gives me y1 , to find the final kn , 
I put y=y2 into this equation (x2,y2 is the last integral point) .

That gives me kn=GCD(y2−y1,x2−x1) . 
Now , every k between 0 and this kn are integral points!

If you include the initial point too ans is GCD(y2−y1,x2−x1)+1 .

If you exclude initial and final points ans is GCD(y2−y1,x2−x1)−1.
********************************************************************

******************* Interest Calculation *********************

//simple
A = principal + interest;
interest = principal * time * rate;
//compund
A = P(1 + (rate / interval_per_year))^(time*interval_per_year);
time = log(A / principal) / (interval_per_year * log(1 + (rate / interval_per_year)));


**************************************************************



************************** Fibonacci ************************

#define fib(x)  ((pow((1+sqrt(5)),x)-pow((1-sqrt(5)),x))/(pow(2,x)*sqrt(5)))

****

double fb[1000];
void fibo(){
    fb[0]=0;
    fb[1]=1;
    int i=2;
    while(1){
        double x=fb[i-2]+fb[i-1];
        fb[i]=x;
        if(i==101)break;
        i++;
    }
}

****

** sum of 1 to nth Fibonacci number is = fib(n+2)-1;

****

** Matrix form **
It is easy to prove the following relation:

(F(n−1), F(n))=(F(n−2) F(n−1))⋅(0 1)
                               (1 1)

Denoting P≡(0 1)
           (1 1), 
we have:
(F(n) F(n+1))=(F(0) F(1))⋅P^n
Thus, in order to find F(n), we must raise the matrix P to n.
This can be done in O(logn).

Fast Doubling Method:
Using above method we can find these equations:
F(2k)=F^2(k+1)+F^2(k)
F(2k+1)=Fk(2F(k+1) − F(k))
Thus using above two equations 
Fibonacci numbers can be calculated easily by the following code:


//fibonacci number by matrics method
pair<ll,ll> fibo(int n){
    if(n==0)return make_pair(0,1);
    auto p = fibo(n>>1);
    ll x = p.first * ((2 * p.second) - p.first);
    ll y = (p.first*p.first) + (p.second*p.second);
    if(n&1)return make_pair(y,x+y);
    return make_pair(x,y);
}


The above code returns Fn and Fn+1 as a pair

// my implementation ----------------------------------------------------------

pair<pair<ll,ll>,pair<ll,ll> > matfibo(int n){
    if(n==1)return mp(mp(1,1),mp(1,0));
    pair<pair<ll,ll>,pair<ll,ll> > p = matfibo(n/2);
    p = mp(mp(((p.ff.ff*p.ff.ff)+(p.ff.ss*p.ss.ff)),((p.ff.ff*p.ff.ss)+(p.ff.ss*p.ss.ss))),mp(((p.ss.ff*p.ff.ff)+(p.ss.ss*p.ss.ff)),((p.ss.ff*p.ff.ss)+(p.ss.ss*p.ss.ss))));
    if(n&1)p = mp(mp((p.ff.ff+p.ff.ss),p.ff.ff),mp((p.ss.ff+p.ss.ss),p.ss.ff));
    return p;
}

/*  output:
pair<pair<ll,ll>,pair<ll,ll> > p = matfibo(n);
printf("f(n)   = %lld\nf(n-1) = %lld\n",p.ff.ff,p.ss.ff);
*/

*************************************************************



********************* NUMBER THEORY ***************************


****** ****** ****** ****** ****** ****** ****** ****** ****** ****** ****** ******

** approximately number of prime between 1 - n is : π(n) = n / ln(n); 



                      **** Prime factorization ****
* prime factorization is express Coposit number as product of prime numbers;

* if m = p1^a1 * p2^a2 ... ... pk^ak;
     n = p1^b1 * p2^b2 ... ... pk^bk;
  then, LCM(m,n) = p1^max(a1,b1) * p2^max(a2,b2) ... ... pk^max(ak,bk);
  and GCD(m,n) = p1^min(a1,b1) * p2^min(a2,b2) ... ... pk^min(ak,bk);

* for any positive complete number a, b and c => 
        GCD(ac, bc) = c * GCD(a, b);
    and LCM(ac, bc) = c * LCM(a, b);

* for any complete number a & b => (a * b) = GCD(a,b) * LCM(a,b);



****    ****    ****    ****    ****    ****    ****    ****    ****    

**************** inclucation exclution ***********************

how many number between 1 to 30 is devisible by... 5 & 6.
ans = ((30/5)+(30/6)) - (30/(5*6));

set2:
(a) = (a);

set2:
(aΠb) = (a)+(b) -(aΠb);

set3:
(aΠbΠc) = (a)+(b)+(c)-(aΠb)-(aΠc)-(bΠc)+(aΠbΠc);

set4:
(aΠbΠcΠd) = (a)+(b)+(c)+(d)-(aΠb)-(aΠc)-(aΠd)-(bΠc)-(bΠd)-(cΠd)
            +(aΠbΠc)+(aΠbΠd)+(aΠcΠd)+(bΠcΠd)-(aΠbΠcΠd);



****** ****** ****** ****** ****** ****** ****** ****** ****** ****** ****** ******

*******Trailing zeros & number of digit in factorial of a number***********

we can break the Base B as a product of primes : :   B = a^p1 * b^p2 * c^p3 * …

Then the number of trailing zeroes in N factorial in Base B is given by the formulae
= min{ 1/p1(n/a + n/(a*a) + ….), 1/p2(n/b + n/(b*b) + . .), ….}.

And the number of digits in N factorial is :=: floor (ln(n!)/ln(B) + 1);



unsigned long long tralling_zero_of_factorial_anyBase(vector<pair<long long,int> > v,long long n){
    unsigned long long zero = ULLONG_MAX;
    for(int i=0;i<v.size();i++){
        unsigned long long x=0;
        long long tmp=n;
        while(tmp){
            x+=(tmp/v[i].first);
            tmp/=v[i].first;
        }
        x/=v[i].second;
        if(x<zero)zero=x;
    }
    return zero;
}
****** ****** ****** ****** ****** ****** ****** ****** ****** ****** ****** ******

**
** Legranges theorem state that, every positive integer can be represented 
** as sum of 4 squre number  ex: 123 = 8^2 + 5^2 + 5^2 + 3^2
**

**
** Willson theorem state that, if a number N is prime then ::: (N-1)! % N = N-1
**

**
** Zeckendorfs theorem state that, every positive integer has a unique representation 
** as a sum of Fibonacci numbers... ex: 74 = 55 + 13 + 5 + 11. 
**

**************************** Pythagorien triple ***********************************

Pythagorien triple (a,b,c) is kind of triple where ...

a^2 + b^2 = c^2

Euclidian formula to produce all primitive Pythagorien tryple is...

((n^2 - m^2),(2*n*m),(n^2 + m^2))

where n & m are coprime and greater then 0 and at least 1 of them(a/b/c) is even

****** ****** ****** ****** ****** ****** ****** ****** ****** ****** ****** ******

************** Gray Code *********************
// n to g
int g (int n) {
    return n ^ (n >> 1);
}

// g to n
int rev_g (int g) {
  int n = 0;
  for (; g; g >>= 1)
    n ^= g;
  return n;
}
**********************************************

***************** PRIME Generator & Tester ********************

***** normal prime generator *****

int isprime(int n){
    if(n<=2)return 1;
    if(!(n&1))return 0;
    int x=sqrt(n)+1;
    for(int i=3;i<=x;i+=2){
        if(n%i==0)return 0;
    }
    return 1;
}

***** seive prime generator from 1 to n *****

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

***** Sieve using half memory *****

void half_mem_sieve(int n){//lim 2*1e7
    int lim=sqrt(n);
    prime.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(!mark[i/2]){
            prime.push_back(i);
            if(i<=lim){
                for(int j=i*i;j<=n;j+=(i*2))mark[j/2]=1;
            }
        }
    }
}

***** Bitwise seive with full iteration *****

int setBit(int n, int position){
    n = n | (1 << position);
    return n;
}
 
bool checkBit(int n, int position){
    return (n & (1 << position));
}
 
void bitSieve(int n){
    int lim=sqrt(n);
    mark[0]=setBit(mark[0], 0);
    mark[0]=setBit(mark[0], 1);
    prime.push_back(2);
    for(int i=4; i<=n; i+=2){
        mark[i>>5] = setBit(mark[i>>5], i&31);
    }
    for(int i=3;i<=n;i+=2){
        if(!checkBit(mark[i>>5], i&31)){
            prime.push_back(i);
            if(i<=lim){
                for(int j=i*i;j<=n;j+=i*2){
                    mark[j>>5] = setBit(mark[j>>5], j&31);
                }
            }
        }
    }
}

***** bitSieve with Half memory *****

void half_mem_bitSieve(int n){
    int lim=sqrt(n);
    prime.push_back(2);
    for(int i=3; i<=n; i+=2){
        if(!checkBit(mark[i>>6], ((i>>1)&31))){
            prime.push_back(i);
            if(i<=lim){
                for(int j=i*i; j<=n; j+=i*2){
                    mark[j>>6] = setBit(mark[j>>6], ((j>>1)&31));
                }
            }
        }
    }
}


***** sigmented seive : its generate all prime between 2 given number *****

void sigprime(ll l,ll r){
    bool mark[r-l+1];
    for(int i=0;i<=r-l;i++)mark[i]=1;
    for(int i=0;prime[i]*(ll)prime[i]<=r;i++){
        ll base=(l/prime[i])*prime[i];
        if(base<l)base+=prime[i];
        for(ll j=base;j<=r;j+=prime[i])mark[j-l]=0;
        if(base==prime[i])mark[base-l]=1;
    }
    for(int i=0;i<=(r-l);i++)if(mark[i])printf("%lld\n",i+l);
}

********************* Optimized Linear Sieve *************************

//Complixity O(n), also give prime factorization as side effect.
int lp[10000100];
void linear_sieve(int n){
    for(int i=2;i<=n;i++){
        if(lp[i]==0){
            lp[i]=i;
            prime.push_back(i);
        }
        for(int j=0 ;j<=prime.size() && prime[j]<=lp[i] && i*prime[j]<=n ;j++){
            lp[i*prime[j]]=prime[j];
        }
    }
}

************************************************************************
******************* Factorial Modulas ****************

int factmod(int n, int p) {
    int res = 1;
    while (n > 1) {
        res = (res * ((n/p) % 2 ?  p-1 : 1)) % p;
        for (int i = 2; i <= n%p; ++i)
            res = (res * i) % p;
        n /= p;
    }
    return res % p;
}
******************************************************

************************** Factorization **************************

***** efficient prime factorization by sieve *****

map<int,int> prime_factor_sod_nod(ll n, int &nod, ll &sod, ll &phi){
    map<int,int> ret;
    ll tmp=n;
    for(int i=0; prime[i] * prime[i] <= n; i++){
        while(!(n%prime[i])){
            ret[prime[i]]++;
            n/=prime[i];
        }
    }
    if(n>1)ret[n]++;
    
    int div=1;
    ll sum=1,Phi=tmp;
    for(const auto &x : ret){
        div *= (x.second+1);
        sum *= (((pow(x.first,x.second)*x.first)-1)/(x.first-1));
        Phi *= (1.0-(1.0/x.first));
    }
    nod=div;
    sod=sum;
    phi=Phi;

    return ret;
}

                    *********************
map<ll,int> prime_factor_without_divisor(ll n){
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

************************ Prime Factorization in Log(n) time ****************

int spf[10000100];
void smallest_prime_fector(int n){// good range 1e6
    int lim=sqrt(n)+2;
    for(int i=1;i<=n;i++)spf[i]=i;
    for(int i=4;i<=n;i+=2)spf[i]=2;
    for(int i=3;i<=n;i+=2){
        if(spf[i]==i && i<=lim){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j)spf[j]=i;
            }
        }
    }
}

vector<int> logn_prime_factor(int n){
    vector<int> ret;
    while(n!=1){
        ret.push_back(spf[n]);
        n/=spf[n];
    }
    return ret;
}

***************** Prime factor of Factorial ******************

map<int,int> factorial_prime_factor(int n){//need all prime upto n
    map<int,int> mp;
    for(int i=0;prime[i]<=n;i++){
        int x=n,sum=0;
        while(x>1){
            sum+=(x/prime[i]);
            x/=prime[i];
        }
        mp[prime[i]]=sum;
    }
    return mp;
}


*************** prime factorization sqrt(n) *******************

vector<int> sqrt_prime_factorization(int n){
    vector<int> fct;
    while(n%2==0){
        fct.push_back(2);
        n >>= 1;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            fct.push_back(i);
            n/=i;
        }
    }
    if(n>2)fct.push_back(n);
    return fct;
}

************************** Divisors **************************

***************** sum of divisor of all number upto n ***************

ll sum_of_divisor_of_all_number_upto_n(int n){ //O(n)
    ll ret=0;
    for(int i=1;i<=n;i++)ret+=((n/i)*i);
    return ret;
}

ll sum_of_divisor_of_all_number_upto_n(ll n){ //O(sqrt(n))
    ll ret=0, lim = sqrt(n);
    for(int i=1;i<=lim;i++)ret += ((n/i)*i);
    lim = n/(lim+1);
    for(int i=1;i<=lim;i++){
        ll x = n/i , y = n/(i+1);
        ret += i*(((x*(x+1)) - (y*(y+1)))/2);
    }
    return ret;
}

********* Efficient divisors upto 18 digit number **********


void devisor_of_18digit_number_ans(vector<vector<ll> > &v, int x, ll ans, vector<ll> &dev){
    if(x>=v.size()){
        dev.push_back(ans);
        return;
    }
    for(int i=0;i<v[x].size();i++){
        ans*=v[x][i];
        devisor_of_18digit_number_ans(v,x+1,ans,dev);
        ans/=v[x][i];
    }
}


vector<ll> devisor_of_18digit_number(ll n){//first generate 1e8 prime
    vector<vector<ll> > v;
    vector<ll> tmp;

    tmp.push_back(1);
    
    for(int i=0;(prime[i]*prime[i]<=n && i<prime.size());i++){
        while(!(n%prime[i])){
            n/=prime[i];
            tmp.push_back(prime[i]);
        }
        
        if(tmp.size()>1){
            for(int j=1;j<tmp.size();j++){
                tmp[j]*=tmp[j-1];
            }
            v.push_back(tmp);
            tmp=vector<ll>();
            tmp.push_back(1);
        }
    }
    if(n>1){
        tmp.push_back(n);
        v.push_back(tmp);
    }
    vector<ll> dev;
    devisor_of_18digit_number_ans(v,0,1,dev);
    return dev;
}


******************** Divisors of n in sqrt(n) ******************************

vector<int> divisor_in_sqrt(int n){
    vector<int> a,b;
    int lim=sqrt(n);
    for(int i=1;i<=lim;i++){
        if(n%i==0){
            if(n/i==i)a.push_back(i);
            else{
                a.push_back(i);
                b.push_back(n/i);
            }
        }
    }
    for(int i=b.size()-1;i>=0;i--)a.push_back(b[i]);
    return a;
}

**************** all devisors for number from 1 to n in nlogn ********************

vector<int> devisors[10000100];
void Devisors(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            devisors[j].push_back(i);
        }
    }
}

*******************************************************************************

************* Represent a number as Subtraction of 2 square number ***********

bool is_subtract_of_square(int n,int &a,int &b){
    if(n%4==2) return 0; // if n≡2(mod4), we cannot find a and b such that n=a^2−b^2
    if(n%4!=0){    //n = ((n+1)/2)^2 - ((n-1)/2)^2;
        a=((n+1)/2)^2;
        b=((n-1)/2)^2;
    }
    else{    //n = ((n/4)+1)^2 - ((n/4)-1)^2;
        a=((n/4)+1)^2;
        b=((n/4)-1)^2;
    }
    return 1;
}

************* Represent a number as sum of 2 Cube ***************

F(n) = a^3 + b^3 = (2n + 6n^2 + 6n^3 + n^4)^3 + (n + 3n^2 + 3n^3 + 2n^4)^3;
     = c^3 + d^3 = (1+4n+6n2+5n3+2n4)3+(−1 − 4n − 6n^2 − 2n^3 + n^4)^3;


********** rational number to P/Q formet converter***************


//j is the number of digits which repetd infinatly
//k is the number of non repeted digits placed before repeted digits
//n is the rational number < 1.
//this function will print the rational number as P/Q formet. 

void normal_ratio(int j,int k,double n){

    if(abs(n)<1e-10){
        printf(" 0/1\n");
        return;
    }


    ll lft=pow(10,k+j),rit=pow(10,k);
    double a = ((double)lft*n), b = ((double)rit*n);

    ll aa,bb,nu,dnu;
    if(j==0){
        a+=0.1;
        nu=a;dnu=lft;
    }
    else{
        a+=.1;
        aa=a,bb=b;
        aa-=bb;
    
        nu=aa,dnu=(lft-rit);
    }

    map<int,int> x=prime_factor(nu);
    map<int,int> y=prime_factor(dnu);

    for(auto &i : x){
        if(y.count(i.first)){
            if(i.second<=y[i.first]){
                y[i.first]-=i.second;
                i.second=0;
            }
            else{
                i.second-=y[i.first];
                y[i.first]=0;
            }
        }
    }

    ll ansl=1,ansr=1;

    for(auto i : x){
        ansl*=(pow(i.first,i.second));
    }
    for(auto i : y){
        ansr*=(pow(i.first,i.second));
    }
    printf(" %lld/%lld\n",ansl,ansr);
}

************************************************************


************** Eular Totent : Co-prime calculator ***********

*** properties of eular phi ***

The following properties of Euler totient function 
are sufficient to calculate it for any number:

If p is a prime number, then gcd(p,q)=1 for all (1 ≤ q < p) Therefore we have:
    ϕ(p) = p−1

If p is a prime number and k≥1, 
then there are exactly (p^k)/p numbers between 1 and p^k that are divisible by p. 
Which gives us:    ϕ(p^k) = p^k − p^(k−1).

If a and b are relatively prime, then:
    ϕ(ab) = ϕ(a) ⋅ ϕ(b)

This relation is not trivial to see. It follows from the Chinese remainder 
theorem. The Chinese remainder theorem guarantees, 
that for each 0≤x<a and each 0≤y<b, there exists a unique 0≤z<ab with 
z≡x(mod a) and z≡y(mod b). Its not hard to show that z is coprime to 
ab if and only if x is coprime to a and y is coprime to b. 
Therefore the amount of integers coprime to ab is equal to 
product of the amounts of a and b.

In general, for not coprime a and b, the equation
    ϕ(ab) = ϕ(a) ⋅ ϕ(b) ⋅ (d/ϕ(d));
where d = gcd(a,b).


**  ϕ(n)=ϕ(p1^a1)⋅ϕ(p2^a2) . . . ϕ(pk^ak)
        =(p1^a1 − p1^(a1−1)) ⋅ (p2^a2 − p2^(a2−1)) . . . (pk^ak − pk^(ak−1));

    Φ(n) = n * (1-(1/p1)) * (1-(1/p2))...(1-(1/pk));
    Φ(n) = (n-(n/p1)) - - - - (n-(n/pk));

or
**  Φ(n) = ((p^(a-1)) * (p-1)) * - - - ();
    Φ(12) = 2^((2-1)*(2-1)) * 3^((1-1)*(3-1)) = 4;

***sieve phi***

int phi[10000100];
void coprime(int n){
    for(int i=1;i<=n;i++)phi[i]=i;
    for(int i=2;i<=n;i++){
        if(phi[i] == i){
            for(int j = i ; j <= n ; j += i){
                phi[j] = (phi[j]/i) * (i-1);
                //phi[j] -= (phi[j]/i)
            }
        }
    }
}

***** sum of all coprime of a number ******

sum_of_coprimes = (phi[n]/2)*n;



******* count the number_of_pair < n with gcd equal to g *******

Since D must divide both i and j, you can divide everything through by D 
immediately and reduce to: how many pairs (k,ℓ) of integers such that
1≤k≤ℓ≤M have gcd(k,ℓ)=1, where M=⌊N/D⌋.

ll number_of_pair(ll n, ll g){
    n = n / g;
    return  phi[n];
}


*************************************************************************

***************** farmet & eular theorem ********************

when m is prime and (x,m) are co-prime;
according to Farmet theorem ... x^(m-1) % m = 1 ...

its also can be ezpressed as ... x^k % m = x^(k%(m-1)) % m ...

more generally Eular state that ... x^φ(m) % m = 1 ...

when m is prime according to Farmet ... φ(m) = m-1 ...

****** ****** ****** ****** ****** ****** ****** ****** ****** 

****************** Modular Exponentiation *******************

ll bigmod(ll base,ll power,ll mod){
    if(power==0)return 1;
    ll a = bigmod(pw/2);
    a=(a*a)%md;
    if(pw & 1)a=(a*bs)%md;
    return a;
}

*****************************

ll modpow(ll x, ll n, ll mod) {
    if (!n) return 1 % mod;
    ll ret = modpow(x, n/2, mod);
    if (n&1) ret = ((ret%mod) * ret % mod * x%mod) % mod;
    else ret = (ret%mod * ret%mod) % mod;
    return ret;
}

*****************************

ll exp(ll a,ll p,ll m){
    if(p==0)return 1;
    ll x = exp(a,p/2,m)%m;
    x = (x*x)%m;
    if(p&1)x = (x*(a%m))%m;
    return x;
}

*****************************

ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

**************************************************************


********** Farmet Little theorem : "Primility test" **********

farmet little theorem state that if p is a prime number then : 
(a^p % p = a)  or (a^(p-1) % p = 1) ......where (1<a<p),

bool farmet_prime(int p){
    if(p==2||p==3)return 1;
    if(p<=3)return 0;
    if(p%2==0)return 0;
    
    srand((unsigned)time(0));
    for(int i=0;i<10;i++){
        int r = (rand()%(p-3))+2;
        if(gcd(r,p)!=1)return 0;
        if(modpow(r,p-1,p)!=1)return 0;
    }
    return 1;
}

******************* Modular Inverse **********************

int modinverse(int x,int mod){
    // (x * x^-1) % mod = 1
    // x^φ(mod) % mod = x * x^(φ(mod)-1) % mod = 1

    if(is_prime(mod)){
        // x^-1 = x^(mod-2)
        return modpow(x,mod-2,mod);
    }
    else if(gcd(x,mod)==1){
        // x^-1 = x^(φ(mod)-1)
        return modpow(x,phi[mod]-1,mod);
    }
    else return 0;
}
****** ****** ****** ****** ****** ****** ****** ****** ****** 

***************************************************************
************** Miller Rabin : "Primility test" ******************

ll exp(ll a,ll p,ll m){
    if(p==0)return 1;
    ll x = exp(a,p/2,m)%m;
    x = (x*x)%m;
    if(p&1)x = (x*(a%m))%m;
    return x;
}


bool miller_rabin(int p){
    if(p==2||p==3)return 1;
    if(p<=3)return 0;
    if(!(p%2))return 0;

    srand((unsigned)time(0));

    for(int i=0;i<11;i++){
        int r=(rand()%(p-3))+2;

        int s=p-1;
        while(!(s%2))s/=2;

        int mod=exp(r,s,p);
        if(mod==1 || mod==p-1)continue;

        int flg=0;
        while(s!=(p-1)){
            mod=exp(r,s,p);
            if(mod==(p-1)){
                flg=1;
                break;
            }
            s*=2;
        }
        if(!flg)return 0;
    }
    return 1;
}

***************************************************************
***************************************************************



***************************************************************

***** check a year is leap year or not *****

int isleap(int n)
{
    if((n%4==0||n%400==0)&&n%100!=0)return 1;
    return 0;
}

***** day of week *****
int day_of_week(int d,int m,int y){//first day 1 = Monday
    vector<int> v={31,28,31,30,31,30,31,31,30,31,30,31};
    if(isleap(y))v[1]++; y--;
    for(int i=1;i<v.size();i++)v[i]+=v[i-1];
    int day=((y*365)+(y/4)-(y/100)+(y/400));if(m-1)day+=v[m-2];
    return (day+d)%7;
}

*****************************************************


********************* GCD LCM ***********************

a * b = lcm * gcd;

int gcd(int a,int b){
    if(a%b==0)return b;
    return gcd(b,a%b);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);  
}

ll extended_euclid(ll a, ll b, ll &x, ll &y){// egcd
    if(b==0)
    {
        x=1;y=0;
        return a;
    }
    ll x1,y1;
    ll temp=extended_euclid(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return temp;
}

******************************************************


****************** Number Conversion, Convert any base to any base ***************

string s;   //this is input
vector<char> v;  //this is output
ll todec(int n,int i,int p){
    if(i==s.size())return 0;
    if(s[i]>='0'&&s[i]<='9')return ((s[i]-48) * pow(n,p))+todec(n,i+1,p-1);
    else return ((s[i]-55) * pow(n,p))+todec(n,i+1,p-1);
}
void decto(ll n,int b){
    if(n<=0)return;
    char c;
    if(n%b<=9)c=(n%b)+48;
    else c=(n%b)+55;
    decto(n/b,b);
    v.push_back(c);
}
void anytoany(int a,int b){
    v=vector<char>();
    ll x=todec(a,0,s.size()-1);
    decto(x,b);
}






************************************************************************************


///////////////////////////////////////////////////////////////////////////////////////////////
***********************************************************************************************
///////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////
*********************************** Combinatorics *********************************************
///////////////////////////////////////////////////////////////////////////////////////////////



********************** Combination ***************************

nCr = n! / ((n-r)! * r!);
nCr = (n-1)C(r-1) + (n-1)Cr;


map<pair<int,int>,ll> mp; 
ll ncr(int n,int r){
    if(r==1)return n;
    if(n==r)return 1;
    ll a,b;

    if(mp[make_pair(n-1,r)])a=mp[make_pair(n-1,r)];
    else a=ncr(n-1,r); mp[make_pair(n-1,r)]=a;
    
    if(mp[make_pair(n-1,r-1)])a=mp[make_pair(n-1,r-1)];
    else b=ncr(n-1,r-1); mp[make_pair(n-1,r-1)]=b;
    
    return a+b;
}


ll ar[10000][10000];

ll ncr(int n,int r){
    if(r==1)return n;if(n==r)return 1;
    ll a,b;

    if(ar[n-1][r])a=ar[n-1][r];
    else{
        a=ncr(n-1,r);
        ar[n-1][r]=a;
    }

    if(ar[n-1][r-1])b=ar[n-1][r-1];
    else{
        b=ncr(n-1,r-1);
        ar[n-1][r-1]=b;
    }

    return ar[n][r]=a+b;
}


ll ncr_loop(int n,int r){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=r;j++){
            if(j<=i){
                if(i==j)ar[i][j]=1;
                else if(j<=1)ar[i][j]=i;
                else ar[i][j]=ar[i-1][j]+ar[i-1][j-1];
            }
        }
    }
    return ar[n][r];
}

ll C(ll n, ll r){
    int a=(n-r);
    ll ans=1;
    if(a>=r){
        int j=1;
        for(int i=a+1;i<=n;i++){
            ans*=i;
            if(j<=r){
                ans/=j;
                j++;
            }
        }
        while(j<=r){
            ans/=j;
            j++;
        }
    }
    else{
        int j=1;
        for(int i=r+1;i<=n;i++){
            ans*=i;
            if(j<=a){
                ans/=j;
                j++;
            }
        }
        while(j<=a){
            ans/=j;
            j++;
        }
    }
    return ans;
}
********************** Permutation ***************************

nPr = n! / (n - r)!;


******** number of way to represent a number as sum of integers *********

ll way(int n){
    if(n == 1) return 1;
    int sum = 1;
    for(int i = 1; i < n; i++) sum += way(i);
    return sum;
}
//formula 2^(n-1)

*********************** Binomial Expression *******************

void binomial_expression(int n){
    for(int i=0;i<=n;i++){
        int co=(fact(n)/(fact(n-i)*fact(i)));

        if(i)printf(" + ");
        
        if(co!=1)printf("%d",co);
        if(n-i)printf("a^%d",n-i);
        if(i && n-i)printf(".");
        if(i)printf("b^%d",i);
    }
    printf("\n");
}


*********************** Factorial *************************

ll fact(ll n){
    if(n==0)return 1;
    return n*fact(n-1);
}


*****************************************************************
//how many way to constract a natural number n

ll way(int n){
    if(n==1)return 1;
    ll sum=0;
    for(int i=1;i<n;i++){
        sum+=way(i);
    }
    return sum+1;

    //ans = 2^(n-1)
}

********************** Jacobsthal Number ************************

this sequence is like fibonacci sequence...
its starts with : 0 , 1 
then the n,th number is sum of ((n-1)th number and  ( (n-2)th number * 2));

Jacobsthal_Number(n) = Jacobsthal_Number(n-1) + 2*Jacobsthal_Number(n-2);



********************** Derangement number ***********************

Derangement number is there are how many way to permutation n objects 
such that none of them take there real position.

De(n) = (n-1)*De(n-2) + (n-1)*de(n-1);

******************** Catalan number ************************

catalan(n) = combination(2*n , n) - combination(2*n , n+1); 


********************* Stirling numbers **************************

*** stirling number of 2nd kind ***

stirling number of 2nd kind is there are how many way to 
divide n objects into k sigment.

str2(n,k) = str2(n-1,k-1) + k*str2(n-1,k);
base case : str2(n,1)=str2(n,n)=1;

*** stirling number of 1st kind ***

stirling number of 1st kind is there are how many way to 
divide n objects into k Cycle.

str1(n,k) = str1(n-1,k-1) + (n-1)*str1(n-1,k);
base case : str1(n,1)=(n-1)!, str1(n,n)=1;

---------------------------------------------------------
// n objects is given, you have to partition them in k set, how mane way to do that?

ll Stirling_numbers(int n,int k){
    int n1=n,k1=k;
    if(n<0)return 1;
    if(k<0)return 0;
    if(n==0 && k==0)return -1;
    if(n!=0 && n==k)return 1;
    if(n<k)return 0;
    ll tmp = Stirling_numbers(n1-1,k1);
    tmp = k1 * tmp;
    return (k1*(Stirling_numbers(n1-1,k1)))+Stirling_numbers(n1-1,k1-1);
}







///////////////////////////////////////////////////////////////////////////////////////////////
***********************************************************************************************
///////////////////////////////////////////////////////////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////
***************************************** GEOMETRY *****************************************
////////////////////////////////////////////////////////////////////////////////////////////////

*****
//is given polygon is a regular polygon
if(360%(180-angle)==0)YES;
*****

*****
//distance between two point 2D/3D
D dis2d(D a,D b,D c,D d){return sqrt(((c-a)*(c-a))+((d-b)*(d-b)));}
D dis3d(D a,D b,D c,D d,D e,D f){return sqrt(((d-a)*(d-a))+((e-b)*(e-b))+((f-c)*(f-c)));}

**
* area of equal sided triangle = a * (sqrt(3) / 4);
**
************************* Vector *****************************

***problem : tide & boat.
//speed of tide is u and speed of a boat is v which crossing the river
//to reach exact oposite corner what should be the angle of boat.
tanθ = (vsinα)/(U + vcosα);
=>tan90 = (vsinα)/(u + vcosα);
=>u + vcosα = 0;
=>cosα = -(u/v);
=>α = cos^-1(-(u/v));
time, t = d / (vsinα);


*****Vector formula*****

* A . B = ABcosθ//value of dot product;
* A . B = ABcos(90) = 0 // if dot product of 2 vector is 0 then they prouduce a right angle;

* A x B = ABsinθ //value of cross product;
* right single angle on vector sarface = (A x B)/(|A x B|);
* A x B = 0;//if A||b then cross product of A & B is 0.
* A x B = ABsinθ;// area of samantorik is cross product of vector
* A x B = ABcosθ/2;//area of triangle

* we can express cross product of 2 vector by determinent
A = axi + ayj + azk;
B = bxi + byj + bzk;

A x B =i(ay*bz - az*by) - j(ax*bz - az*bx) + k(ax*by - ay*bx);

i   j   k
ax  ay  az
bx  by  bz

********************Straight Line***************************

*** cartesian - polar : coordinate system ***
 p(x,y)=p(r,θ);
 r = sqrt(s^2 + y^2);
 x = r*cosθ;
 y = r*sinθ;
 θ = tan^-1(y/x);



********************** Triangle *************************

** a,b,c is the three side of triangle and A,B,C is the 3 angle
**
* if a,b,c is given then A,B,C is.........
    cos(C) = (a^2 + b^2 - c^2) / 2ab;
    cos(A) = (b^2 + c^2 - a^2) / 2bc;
    cos(B) = (c^2 + a^2 - b^2) / 2ca;

********************** Circle sigment *******************

** radius = height of sector + height of sector triangle;
          = (height of sector / 2) * (cord^2 / (8 * height of sector));
** 





******************
ll max_dia_move(ll x,ll y,ll move){
    //this function will return maximum diagonal move 
    //to reach a point from (0,0) with given number of move
    //if not possible it will return -1.

    if(move<abs(x) || move<abs(y)){
        return -1;
    }
    else{
        ll dis=max(abs(x),abs(y));

        if(x%2==0 && y%2==0){
            if(move-dis>0){
                if(move%2!=0)return (move-2);
                else return move;
            }
            else return dis;
        }
        else if(x%2!=0 && y%2!=0){
            if(move-dis>0){
                if(move%2==0)return (move-2);
                else return move;
            }
            else return dis;
        }
        else return (move-1);
    }
}

*********************

******** find the length of sides of cube from the area of serface *********

s1 = ab, s2 = bc, s3 = ca, are 3 serface and they are sharing a common vartex/corner of a cube.

length = a = sqrt((s1 * s3) / s2) 
hight = b = sqrt((s1 * s2) / s3)
width = c = sqrt((s2 * s3) / s1)


*********************

******** lattice polygon **********

we are given two values:

B = number of lattice points on the boundary of the polygon
I = number of lattice points in the interior of the polygon

find the area of polygon...

Area = B/2 + I - 1

****************************************************************************


////////////////////////////////////////////////////////////////////////////////////////////////
*********************************************************************************************
////////////////////////////////////////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////////////////////////////////////////////
***************************** Search & SORT **************************************************
//////////////////////////////////////////////////////////////////////////////////////////////

//_____________Subset Genetaror _____________

//bit mathod
vector<int> v, ans;
void subset(){
    int lim = (1 << v.size());
    for(int i = 0; i < lim; i++){
        for(int j = 0; j < v.size(); j++){
            if(i & (1 << j)) {
                cout << v[j] << " ";
            }
        }
        cout<<endl;
    }
}

//recursive mathod
vector<int> v, ans;
void subset(int n){
    if(n == v.size()){
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout<<endl;
        return;
    }
    subset(n + 1);
    ans.push_back(v[n]);
    subset(n + 1);
    ans.pop_back();
}

//__________nqueen demo___________
/*
(r1[x]==r2[x+y]==r3[x-y+n-1])
this is the most efficient diagonal chaeaking..
r1_________________
0 1 2 3
0 1 2 3
0 1 2 3
0 1 2 3
r2_________________
0 1 2 3
1 2 3 4
2 3 4 5
3 4 5 6
r3_________________
3 2 1 0
4 3 2 1
5 4 3 2 
6 5 4 3
*/
void Nqueen(int y){
    if(y==n){
        count++;
        return;
    }
    for(int x=0;x<n;x++){
        if(r1[x]==r2[x+y]==r3[x-y+n-1])continue;
        r1[x]==r2[x+y]==r3[x-y+n-1]=1;
        search(y+1);
        r1[x]==r2[x+y]==r3[x-y+n-1]=0;
    }
}


//__________________Binary Search____________________

int binary_search1(int x,int lo,int hi){
    if(lo>hi)return 0;
    int mid=(lo+hi)/2;
    
    if(v[mid]==x)return mid;
    else if(v[mid]>x)bs1(x,lo,mid-1);
    else bs1(x,mid+1,hi);
}

int binary_search2(int x,int j,int i){
    if(j<=0)return i;
    while(i+j<v.size() && v[i+j]<=x)i+=j;
    
    bs2(x,j/2,i);
}

#define ubound(v,x) (upper_bound(all(v),x)-v.begin())
#define lbound(v,x) (lower_bound(all(v),x)-v.begin())
//----------------------------------------------------

//__________Ternary Search_____________

double ternary_search(double l, double r) {
    double eps = 1e-9;              //set the error limit here
    while (r - l > eps) {
        double m1 = l + (r - l) / 3;
        double m2 = r - (r - l) / 3;
        double f1 = f(m1);      //evaluates the function at m1
        double f2 = f(m2);      //evaluates the function at m2
        if (f1 < f2)
            l = m1;
        else
            r = m2;
    }
    return f(l);                    //return the maximum of f(x) in [l, r]
}

//----------------------------------------------------


//_______ Marge Sort _______

int arr[1000000],tmp[1000000];
void margesort(int lo,int hi){
    if(lo==hi)return;
    int mid=(lo+hi)/2;
    margesort(lo,mid);
    margesort(mid+1,hi);
    for(int i=lo,j=mid+1,k=lo;k<=hi;k++){
        if(i==mid+1)tmp[k]=arr[j++];
        else if(j==hi+1)tmp[k]=arr[i++];
        else if(arr[i]<arr[j])tmp[k]=arr[i++];
        else tmp[k]=arr[j++];
    }
    for(int i=lo;i<=hi;i++)arr[i]=tmp[i];
}


///////////////////////////////////////////////////////////////////////////////////////////////
*********************************************************************************************
///////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////
*************************** Data Stracture **************************************************
//////////////////////////////////////////////////////////////////////////////////////////////



// Histogram

int histogram(vector<int> v,int n){
    vector<int> lft(n,1),rit(n,1);
    stack<pair<int,int> > st;
 
    for(int i=0;i<n;i++){
        while(st.size()){
            if(st.top().first>=v[i]){
                lft[i]+=lft[st.top().second];
                st.pop();
            }
            else break;
        }
        st.push(make_pair(v[i],i));
    }
 
    st = stack<pair<int,int> >();
 
    for(int i=n-1;i>=0;i--){
        while(st.size()){
            if(st.top().first>=v[i]){
                rit[i]+=rit[st.top().second];
                st.pop();
            }
            else break;
        }
        st.push(make_pair(v[i],i));
    }
 
    int mx=0;
    for(int i=0;i<n;i++)mx = max(mx,(lft[i]+rit[i]-1)*v[i]);
    return mx;
}
//******************************************************************




*********************** Evaluate arithmetic notation **********************

//infix to prefix -------------------------

string infixtoprefix(string infix){
    map<char,int> mp;
    mp['-']=mp['+']=1;
    mp['/']=mp['*']=2;
    mp['^']=3;

    stack<char> operators;
    stack<string> operands;

    for(int i=0;i<infix.size();i++){
        if(infix[i]=='(')operators.push(infix[i]);
        else if(infix[i]==')'){
            while(operators.size() && (operators.top()!='(')){
                string x=operands.top();
                operands.pop();
                string y=operands.top();
                operands.pop();
                char z=operators.top();
                operators.pop();

                string tmp=z+y+x;
                operands.push(tmp);
            }
            operators.pop();
        }
        else if(!isoperator(infix[i])){
            operands.push(string(1,infix[i]));
        }
        else{
            while(operators.size() && mp[infix[i]]<=mp[operators.top()]){
                string x=operands.top();
                operands.pop();
                string y=operands.top();
                operands.pop();
                char z=operators.top();
                operators.pop();

                string tmp=z+y+x;
                operands.push(tmp);    
            }
            operators.push(infix[i]);
        }
    }
    while(operators.size()){
        string x=operands.top();
        operands.pop();
        string y=operands.top();
        operands.pop();
        char z=operators.top();
        operators.pop();

        string tmp=z+y+x;
        operands.push(tmp);    
    }
    return operands.top();
}

//infix to postfix -----------------------------

string postfix(string s){
    map<char,int> mp;mp['+']=mp['-']=1;mp['*']=mp['/']=2;
    s.insert(s.begin(),'(');
    s+=')';

    string ans;
    stack<int> op;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')op.push(s[i]);
        else if(s[i]==')'){
            while(op.top()!='('){
                ans+=op.top();
                op.pop();
            }
            op.pop();
        }
        else if(isoperator(s[i])){
            while(op.top()!='(' && mp[op.top()]>=mp[s[i]]){
                ans+=op.top();
                op.pop();
            }
            op.push(s[i]);
        }
        else ans+=s[i];
    }
    return ans;
} 

//postfix to arithmatic parse tree
struct node{
    char val;
    struct node *left;
    struct node *right;
    node(){
        left=NULL;
        right=NULL;
    }
};
typedef struct node node;

node * arithmatic_parse_tree(string s){
    stack<node*> st;
    for(int i=0;i<s.size();i++){
        node *p=new node();
        p->val=s[i];
        if(!isdigit(s[i]) && !isalpha(s[i])){
            p->right=st.top();
            st.pop();
            p->left=st.top();
            st.pop();
            st.push(p);
        }
        else st.push(p);
    }
    return st.top();
}

//parse tree to infix

string infixstr;
void parse_to_infix(node *p){
    if(p==NULL)return;
    if(!isdigit(p->val) && !isalpha(p->val))infixstr+='(';
    parse_to_infix(p->left);
    infixstr+=p->val;
    parse_to_infix(p->right);
    if(!isdigit(p->val) && !isalpha(p->val))infixstr+=')';
}

//evaluate from postfix

int evalute_postfix(string s){
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(!isdigit(s[i]) && !isalpha(s[i])){
            int b=st.top();st.pop();
            int a=st.top();st.pop();
            
            if(s[i]=='+')st.push(a+b);
            else if(s[i]=='-')st.push(a-b);
            else if(s[i]=='*')st.push(a*b);
            else if(s[i]=='/')st.push(a/b);
        }
        else st.push(s[i]-48);
    }
    return st.top();
}


******************* disjoint set uniun ********************

int find(int x){
    if(arr[x]==x)return x;
    return arr[x] = find(arr[x]);
}

void uniun(int a,int b){
    arr[find(b)]=find(a);
}


******************** 2d Cumulative Sum *********************

int cumulative_sum(vector<vector<int> > arr2d,int a,int b,int c,int d){
    vector<vector<int> > sum(10,vector<int>(10,0));

    for(int i=1;i<arr2d.size();i++){
        for(int j=1;j<arr2d[i].size();j++){
            sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+arr2d[i][j];
        }
    }

    int ans = sum[c][d]-sum[a-1][d]-sum[c][b-1]+sum[a-1][b-1];
    return ans;
}

*********************** Trie ****************************

struct node{
    bool end;
    node *next[26];
    node(){
        end=false;
        for(int i=0;i<26;i++){
            next[i]=NULL;
        }
    }
};
node *root;

void insert(string s){
    node *now = root;
    for(int i=0;i<s.size();i++){
        int id = s[i]-'a';
        if(now->next[id]==NULL){
            now->next[id] = new node();
        }
        now = now->next[id];
    }
    now->end=true;
}

bool search(string s){
    node *now = root;
    for(int i=0;i<s.size();i++){
        int id = s[i]-'a';
        if(now->next[id]==NULL)return 0;
        now = now->next[id];
    }
    if(now->end)return 1;
    return 0;
}

void del(node *now){
    for(int i=0;i<26;i++){
        if(now->next[i]!=NULL){
            del(now->next[i]);
        }
    }
    delete(now);
}

************************* Binary Index Tree **************************
















**********************************************************************

//////////////////////////////////////////////////////////////////////////////////////////////
********************************************************************************************
//////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////
********************************** BitWise Technic ****************************************
//////////////////////////////////////////////////////////////////////////////////////////////
//to cheak a number is power of two or not
int ispowof2(int n){
    if((n & (n - 1)) == 0)return 1;
}

//Convert UpperCase to LowerCase
char casechanger(char c){
    if(c>='a' && c<='z')return c & ~32;
    else return c|32;
}

//swaping two number by X-or
a ^= b;
b ^= a;
a ^= b;

//in a list of number all number are given even time one number is given odd time find that number.
sol: X-OR All numbers;

//A large list of smaller case alphabet is given which characters are appear odd times
sol: take a integer variable. iterate over list and toogle nth bit of int variable.
     finally which bits are on, thats are our ans;


// Reverse all bits of an integer
void reverse_all_bits(int x){
    x = ((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1);
    x = ((x & 0xcccccccc) >> 2) | ((x & 0x33333333) << 2);
    x = ((x & 0xf0f0f0f0) >> 4) | ((x & 0x0f0f0f0f) << 4);
    x = ((x & 0xff00ff00) >> 8) | ((x & 0x00ff00ff) << 8);
    x = ((x & 0xffff0000) >> 16) | ((x & 0x0000ffff) << 16);
    return x;
}

// Count the total ON bits of a number
int x;
__builtin_popcount(x); // for -> int
__builtin_popcountl(x); // for -> long int
__builtin_popcountll(x); // for -> long long


// Average of 2 number -> there is no risk of overflow
int avg(int x, int y){
    return (x&y)+((x^y)>>1);
}



//////////////////////////////////////////////////////////////////////////////////////////////
********************************************************************************************
//////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
******************************* STL Technique **********************************************
//////////////////////////////////////////////////////////////////////////////////////////////

// Operator Overloding : for define how "<" operatr should work
bool operator<(const MyStruct &a, const MyStruct &b){
  if(a < b)return true; 
  else if(a >= b)return false;
}

// operator checker 
bool isoperator(char c){
    return (!isalpha(c) && !isdigit(c));
}

//reverse elements of any container
reverse(v.begin(),v.end()); 

//next permutation of elements
next_permutation(v.begin(),v.end()); 

//previous permutation of elements
prev_permutation(v.begin(),v.end()); 

//generate words from a given string
string str="aa bb cc", word;
stringstream s(str);
while(s >> word){
    cout<<word<<"\n";
}

//set leading zero in cout
int num=122;
cout<<stfill('0')<<setw(5)<<num<<"\n";//out: 00122

//output with fixed length & pricition.
double x=32.3434345545454;
printf("%010.3lf\n",x);

//Shuffle elements of comtainer
random_shuffle(v.begin().v.end());

//declare register variable for frequently use
register int x;

//priority queue with greater priority;
priority_queue<int,vector<int>,greater<int> > Q;

//copy a fixed number of element from a fixed container to another
vector<int> sorce={1,2,3},terget;
copy_n(sorce,n,terget);

//Assign value in container in inrement order
int a[10]={0};
char c[10]={0};
iota(a,a+5,10)//data will be inserted as {10,11,12,13,14};
iota(c,c+4,'a')//data will be inserted as {'a','b','c','d'};

//check all element of container is positive or not.
all_of(v.begin(),v.end(),ispositive());

//check is there any positive element in container.
any_of(v.begin(),v.end(),ispositive());

//find GCD of two number
int x,y;
__gcd(x,y);

//to push back element calling by base constractor use it.
v.emplace_back(4,5);

//Cpp TAMPLATE
//tamplate used for Generilize the datatype for a function.
template<class T>
void fun(T x){
    cout<<x<<"\n";
    //now its not matter that x is from which datatype
}

//set precission in run time
cout<<fixed<<setprecision(n)<<acos(-1.0)<<"\n";
or
printf("%.*lf\n",n,acos(-1.0));

//find in container
if(find(v.begin(),v.end(),item)!=v.end())found;

//find substring
string sorce,item="find";
for(int i=0;i<sorce.size();i++){
    if(sorce.substr(i,item.size())==item) found;
}

//print with scientific notation
printf("%e\n",x);
printf("%E\n",x);

//scan until '\n';
while(scanf("%d%c",&ch,&tmp)){
    if(tmp=='\n')break;
}

//find the max or minimum value from array or vector
int mx = *max_element(array,array+size);
int mn = *min_element(v.begin(),v.end());

//to swap anything
swap(v1,v2);

//to compare that two floating point number is equals or not
bool cmpfloat(double x,double y){
    if(abs(x-y)<eps)return true;
}

//generate Random number
srand((unsigned)time(0));
while(t--)int r=(rand()%hi_lim)+lo_lim;

//list : concatenate 2 list in O(1)
list<int> li1, li2;
for(int i=1;i<=5;i++){li1.push_back(i);li2.push_back(i*5);}
li1.splice(li1.end(),li2); //O(1)

//unorered set : operation in O(1)
unordered_set<int> st;
st.insert(12); st.insert(11);
(st.count(11)?cout<<"found\n":cout<<"not found\n");

//unordered map : operation in O(1)
unordered_map<string, int> mp;
mp["ab"]=10;


// SET : union, intersection and difference of two set

set<int> a,b,un,in,di;

set_union(a.begin(),a.end(),b.begin(),b.end(),insert_iterator<set<int> >(un,un.begin()));
set_intersection(a.begin(),a.end(),b.begin(),b.end(),insert_iterator<set<int> >(in,in.begin()));
set_difference(a.begin(),a.end(),b.begin(),b.end(),insert_iterator<set<int> >(di,di.begin()));

//Conversions
// - > vector to set
One can initialize a set from a vector:
set<int> b(a.begin(),a.end()); // a is a vector<int>
// - > set to vector
Going the other way is also possible:
vector<int> c(b.begin(),b.end()); // b is a set<int>


//Count a spicific element in any container
count(a.begin(), a.end(), element);


//Convert map to vector
map<int,string> mp;
string s="12ab", a;
for(int i=10;i<=20;i++){
    mp[i] = a; a += s;
}

vector<pair<int,string> > v(mp.begin(),mp.end());

for(auto i : v)cout<<i.first<<" "<<i.second<<"\n";


//Copy data between containers 

--> vector

    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {1,2,3,4,5};
    
    v1.resize(v1.size()+ v2.size());
    copy(all(v2), v1.end()-v2.size());
    
    for(auto i : v1)cout<<i<<" ";cout<<endl;

--> use of pointer to reverse array

    void reverse_array(int *A, int n){
        int *B = A+n-1;
        while(A < B){
            swap(*A, *B); A++,B--;
        }
    }

--> use template to take any type of object aj function perameter
    
template< typename T > void our_function(T *begin, T *end){
    
}

// Counting angorithm

->sum of all element of container
    int sum = accumulate(v.begin(),v.end(),0);

->multiplication of all element of container
    int mul = accumulate(v.begin(),v.end(),1, multiplies<int>());


//reserve memory for vector

v.reserve(100000); 
//---> it will allocate the exact memory need for a vector;
//---> otherwise it will allocate double memory then it needs.

// For_Each

vector<int> v(100);
for_each(all(v), func); 
//for_each send the value of each object in range to a spacific function


// 


//////////////////////////////////////////////////////////////////////////////////////////////
********************************************************************************************
//////////////////////////////////////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////////////////////////////////////////////
************************************ SYSTEM ************************************************
//////////////////////////////////////////////////////////////////////////////////////////////

//Run code from ubuntu terminal
C++ 98 : g++ -o test test.cpp
C++ 11 : g++ -std=c++11 -o test test.cpp
C      : gcc -o test test.cpp
Run code : ./test

Python : python test.py

java : javac test.java
       java class_name

//find difference between two file by terminal
diff file1.txt file2.txt

//greek alphabet
Α α, Β β, Γ γ, Δ δ, Ε ε, Ζ ζ, Η η, Θ θ, Ι ι, Κ κ, Λ λ, Μ μ, 
Ν ν, Ξ ξ, Ο ο, Π π, Ρ ρ, Σ σ/ς, Τ τ, Υ υ, Φ φ, Χ χ, Ψ ψ, Ω ω
♡ ❤ 

//////////////////////////////////////////////////////////////////////////////////////////////
********************************************************************************************
//////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////
************************************* JAVA *************************************************
//////////////////////////////////////////////////////////////////////////////////////////////

//Date formating
Date d=new Date();
DateFormat date = new simpleDateFormat("dd/mm/yy");
string out=date.format(d);

//Biginteger






//////////////////////////////////////////////////////////////////////////////////////////////
********************************************************************************************
//////////////////////////////////////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////////////////////////////////////////////
******************************************* GRAPH *******************************************
//////////////////////////////////////////////////////////////////////////////////////////////



****************************minimum spaning tree*****************************

********** prim algorithm ***************

//this is a greedy algorithm

vector<pii> v[10100];
bool mark[10100];

ll prim(int x){
    priority_queue<pii,vector<pii>,greater<pii> > pq;
    pii node;
    pq.push(make_pair(0,x));
    ll ans=0;

    while(!pq.empty()){
        node = pq.top();
        pq.pop();
        x=node.second;

        if(mark[x])continue;
        mark[x]=true;
        ans+=node.first;    
                                //cout<<"("<<node.first<<","<<node.second<<") ";
        for(auto n : v[x]){
            if(!mark[n.second])pq.push(n);
        }
    }
    return ans;
}


************Kruskal algorithm*******************

//this is a greedy algorithm






****************************************************************************



//////////////////////////////////////////////////////////////////////////////////////////////
********************************************************************************************
//////////////////////////////////////////////////////////////////////////////////////////////






//////////////////////////////////////////////////////////////////////////////////////////////
***************************** Biginteger *******************************************
//////////////////////////////////////////////////////////////////////////////////////////////

********************************* MY Implementation ***************************

string intsum(string a,string b){
    int l1=a.size()-1, l2=b.size()-1, ca=0;
    string ans;
    while(l1>=0 || l2>=0){
        int x=ca;ca=0;
        if(l1>=0)x+=(a[l1]-48); 
        if(l2>=0)x+=(b[l2]-48); 
        
        if(x>=10){
            ans+=(x%10)+48;
            x/=10; ca=x;
        }
        else ans+=(x+48);

        if(l1>=0)l1--;
        if(l2>=0)l2--;
    }
    if(ca)ans+=(ca+48); 
    reverse(ans.begin(),ans.end());
    while(ans[0]=='0'){ans.erase(ans.begin());if(!ans.size())break;}
    if(!ans.size())ans+='0';
    return ans;
}


int intcmp(string a,string b){//if(a>b)=1; if(a<b)=-1; if(a==b)=0;
    while(a[0]=='0'){a.erase(a.begin());if(!a.size())break;} if(!a.size())a+='0';
    while(b[0]=='0'){b.erase(b.begin());if(!b.size())break;} if(!b.size())b+='0';
    if(a.size()<b.size())return -1;
    else if(a.size()>b.size())return 1;
    else if(a==b)return 0;
    else{
        for(int i=0;i<a.size();i++){
            if(a[i]<b[i])return -1;
            else if(a[i]>b[i])return 1;
        }
        return 1;
    } 
}


string intdif(string a,string b){
    if(intcmp(a,b)==0)return "0";
    if(intcmp(a,b)==1){
        string ans;
        while(b.size()!=a.size())b.insert(b.begin(),'0');
        int l1=a.size()-1,l2=b.size()-1,ca=0,x;
        while(l1>=0 || l2>=0){
            if((a[l1]-48)>=(b[l1]+ca-48)){
                x=(a[l1]-48)-(b[l1]+ca-48);
                ca=0;
            }
            else{
                x=(a[l1]-48+10)-(b[l1]+ca-48);
                ca=1;
            }
            ans+=(x+48);
            l1--;l2--;
        }
        reverse(ans.begin(),ans.end());
        while(ans[0]=='0')ans.erase(ans.begin());
        return ans;
    }
    else return "-";
}


string intpro(string a,string b){
    string ans="0";
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    for(int i=0;i<b.size();i++){
        int t=i,c=0;
        string tmp;
        while(t--)tmp+="0";
        for(int j=0;j<a.size();j++){
            int x = ((a[j]-48) * (b[i]-48))+c;;
            if(x>=10){
                tmp+=((x%10)+48);
                x/=10;
                c=x;
            }
            else{
                tmp+=(x+48);
                c=0;
            }
        }
        if(c)tmp+=(c+48);
        reverse(tmp.begin(),tmp.end());
        ans=intsum(ans,tmp);
    }
    return ans;
}

string intdiv(string num, int div) { 
    string ans; 
    int idx = 0; 
    int temp = num[idx] - '0';

    while (temp < div)temp = temp * 10 + (num[++idx] - '0'); 
    
    while (num.size() > idx) { 
        ans += (temp / div) + '0'; 
        temp = (temp % div) * 10 + num[++idx] - '0'; 
    } 
      
    if (ans.length() == 0) 
        return "0"; 
      
    return ans; 
}

//********************** BIG Power ***************



int multiply(int x, int res[], int res_size) { 
    int carry = 0; 
      
    for (int i = 0; i < res_size; i++) { 
        int prod = res[i] * x + carry; 
      
        res[i] = prod % 10; 
      
        carry = prod / 10; 
    } 
      
    while (carry) { 
        res[res_size] = carry % 10; 
        carry = carry / 10; 
        res_size++; 
    } 
    return res_size; 
} 
      
string power(int x, int n){ 
    if(n == 0 ){  
        cout<<"1"; 
        return; 
    } 
    int res[1000000]; 
    int res_size = 0; 
    int temp = x; 
      
    while (temp != 0) { 
        res[res_size++] = temp % 10; 
        temp = temp / 10; 
    } 
      
    for (int i = 2; i <= n; i++) 
        res_size = multiply(x, res, res_size); 
      
    string s;
    for (int i = res_size - 1; i >= 0; i--){
        s.push_back(res[i]+48);
    } 
    return s;
} 

//*************************************************************



******************************************************************************


*************************** Collected : Good library *************************

#include <bits/stdc++.h>

using namespace std;



//---------------------------------------------------------------------------------
typedef long long ll;
typedef pair<ll,ll> lll;
typedef pair<ll,int> lli;
typedef pair<int,int> ii;

#define EL printf("\n")
#define OK printf("OK")
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define X  first
#define Y  second
#define fillchar(a,x) memset(a, x, sizeof(a))
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,r,l) for (int i=r;i>=l;i--)

const int base = 1e9;
typedef vector<int> BigInt;

void Set(BigInt &a) {
    while (a.size() > 1 && a.back() == 0) a.pop_back();
}

void Print(BigInt a) {
    Set(a);
    printf("%d", (a.size() == 0) ? 0 : a.back());
    FORD(i,a.size()-2,0) printf("%09d", a[i]); EL;
}



BigInt Integer(string s) {
    BigInt ans;
    if (s[0] == '-') return ans;
    if (s.size() == 0) {ans.pb(0); return ans;}
    while (s.size()%9 != 0) s = '0'+s;
    for (int i=0;i<s.size();i+=9) {
        int v = 0;
        for (int j=i;j<i+9;j++) v = v*10+(s[j]-'0');
        ans.insert(ans.begin(),v);
    }
    Set(ans);
    return ans;
}

BigInt Integer(char c[]) {
    string s = "";
    FOR(i,0,strlen(c)-1) s = s + c[i];
    return Integer(s);
}

BigInt Integer(ll x) {
    string s = "";
    while (x > 0) s = char(x%10+'0') + s, x /= 10;
    return Integer(s);
}

BigInt Integer(int x) {
    return Integer((ll) x);
}




void operator >> (istream &in, BigInt &a) {
    string s;
    getline(cin, s);
    a = Integer(s);
}

void operator << (ostream &out, BigInt a) {
    Print(a);
}




bool operator < (BigInt a, BigInt b) {
    Set(a);
    Set(b);
    if (a.size() != b.size()) return (a.size() < b.size());
    FORD(i,a.size()-1,0)
        if (a[i] != b[i]) return (a[i] < b[i]);
    return false;
}

bool operator > (BigInt a, BigInt b) {
    return (b < a);
}

bool operator == (BigInt a, BigInt b) {
    return (!(a < b) && !(b < a));
}

bool operator <= (BigInt a, BigInt b) {
    return (a < b || a == b);
}

bool operator >= (BigInt a, BigInt b) {
    return (b < a || b == a);
}

bool operator < (BigInt a, int b) {
    return (a < Integer(b));
}

bool operator > (BigInt a, int b) {
    return (a > Integer(b));
}

bool operator == (BigInt a, int b) {
    return (a == Integer(b));
}

bool operator >= (BigInt a, int b) {
    return (a >= Integer(b));
}

bool operator <= (BigInt a, int b) {
    return (a <= Integer(b));
}



BigInt max(BigInt a, BigInt b) {
    if (a > b) return a;
    return b;
}

BigInt min(BigInt a, BigInt b) {
    if (a < b) return a;
    return b;
}




BigInt operator + (BigInt a, BigInt b) {
    Set(a);
    Set(b);
    BigInt ans;
    int carry = 0;
    FOR(i,0,max(a.size(), b.size())-1) {
        if (i < a.size()) carry += a[i];
        if (i < b.size()) carry += b[i];
        ans.pb(carry%base);
        carry /= base;
    }
    if (carry) ans.pb(carry);
    Set(ans);
    return ans;
}

BigInt operator + (BigInt a, int b) {
    return a + Integer(b);
}

BigInt operator ++ (BigInt &a) { // ++a
    a = a + 1;
    return a;
}

void operator += (BigInt &a, BigInt b) {
    a = a + b;
}

void operator += (BigInt &a, int b) {
    a = a + b;
}




BigInt operator - (BigInt a, BigInt b) {
    Set(a);
    Set(b);
    BigInt ans;
    int carry = 0;
    FOR(i,0,a.size()-1) {
        carry += a[i] - (i < b.size() ? b[i] : 0);
        if (carry < 0) ans.pb(carry+base), carry = -1;
        else ans.pb(carry), carry = 0;
    }
    Set(ans);
    return ans;
}

BigInt operator - (BigInt a, int b) {
    return a - Integer(b);
}

void operator -- (BigInt &a) { // --a
    a = a - 1;
}

void operator -= (BigInt &a, BigInt b) {
    a = a + b;
}

void operator -= (BigInt &a, int b) {
    a = a - b;
}




BigInt operator * (BigInt a, BigInt b) {
    Set(a);
    Set(b);
    BigInt ans;
    ans.assign(a.size()+b.size(), 0);
    FOR(i,0,a.size()-1) {
        ll carry = 0ll;
        for (int j=0;j<b.size() || carry > 0;j++) {
            ll s = ans[i+j] + carry + (ll)a[i]*(j<b.size()?(ll)b[j]:0ll);
            ans[i+j] = s%base;
            carry = s/base;
        }
    }
    Set(ans);
    return ans;
}

BigInt operator * (BigInt a, int b) {
    return a * Integer(b);
}

void operator *= (BigInt &a, BigInt b) {
    a = a * b;
}

void operator *= (BigInt &a, int b) {
    a = a * b;
}



BigInt operator / (BigInt a, BigInt b) {
    Set(a);
    Set(b);
    if (b == Integer(0)) return Integer("-1");
    BigInt ans, cur;
    FORD(i,a.size()-1,0) {
        cur.insert(cur.begin(), a[i]);
        int x = 0, L = 0, R = base;
        while (L <= R) {
            int mid = (L+R)>>1;
            if (b*Integer(mid) > cur) {
                x = mid;
                R = mid-1;
            }
            else
                L = mid+1;
        }
        cur = cur - Integer(x-1)*b;
        ans.insert(ans.begin(),x-1);
    }
    Set(ans);
    return ans;
}

BigInt operator / (BigInt a, int b) {
    Set(a);
    BigInt ans;
    ll cur = 0ll;
    FORD(i,a.size()-1,0) {
        cur = (cur*(ll)base + (ll)a[i]);
        ans.insert(ans.begin(),cur/b);
        cur %= b;
    }
    Set(ans);
    return ans;
}

void operator /= (BigInt &a, BigInt b) {
    a = a / b;
}

void operator /= (BigInt &a, int b) {
    a = a / b;
}



BigInt operator % (BigInt a, BigInt b) {
    Set(a);
    Set(b);
    if (b == Integer(0)) return Integer("-1");
    BigInt ans;
    FORD(i,a.size()-1,0) {
        ans.insert(ans.begin(), a[i]);
        int x = 0, L = 0, R = base;
        while (L <= R) {
            int mid = (L+R)>>1;
            if (b*Integer(mid) > ans) {
                x = mid;
                R = mid-1;
            }
            else
                L = mid+1;
        }
        ans = ans - Integer(x-1)*b;
    }
    Set(ans);
    return ans;
}

int operator % (BigInt a, int b) {
    Set(a);
    if (b == 0) return -1;
    int ans = 0;
    FORD(i,a.size()-1,0)
        ans = (ans*(base%b) + a[i]%b)%b;
    return ans;
}

void operator %= (BigInt &a, BigInt b) {
    a = a % b;
}

void operator %= (BigInt &a, int b) {
    a = a % Integer(b);
}

BigInt gcd(BigInt a, BigInt b) {
    Set(a);
    Set(b);
    while (b > Integer(0)) {
        BigInt r = a%b;
        a = b;
        b = r;
    }
    Set(a);
    return a;
}

BigInt lcm(BigInt a, BigInt b) {
    return (a*b/gcd(a,b));
}


BigInt sqrt(BigInt a) {
    BigInt x0 = a, x1 = (a+1)/2;
    while (x1 < x0) {
        x0 = x1;
        x1 = (x1+a/x1)/2;
    }
    return x0;
}


BigInt pow(BigInt a, BigInt b) {
    if (b == Integer(0)) return Integer(1);
    BigInt tmp = pow(a, b/2);
    if (b%2 == 0) return tmp * tmp;
    return tmp * tmp * a;
}


BigInt pow(BigInt a, int b) {
    return pow(a,(Integer(b)));
}


int log(int n, BigInt a) { // log_n(a)
    Set(a);
    int ans = 0;
    while (a > Integer(1)) {
        ans++;
        a /= n;
    }
    return ans;
}
//---------------------------------------------------------------------------------

int main()
{
    BigInt B;  cin >> B;
    BigInt A = Integer("123456789");
    BigInt C = Integer(123456789ll);
    int x; x = 123456789;

    if (B <= A) cout << A - B;
    else {
        cout << "-";
        cout << B - A;
    }

    cout << A + B; Print(A + x);
    cout << A * B; Print(A * x);
    cout << A / B; Print(A / x);
    cout << A % B; printf("%d\n", A % x);

    C = ++A; ++B; C += B + x;
    Print(A); Print(B); Print(C);

    cout << max(A,B);
    cout << min(A,B);

    cout << gcd(A,B);
    cout << lcm(A,B);

    cout << sqrt(A);
    printf("%d %d %d\n", log(2,A), log(10,B), log(5,C));

    A = Integer(16); x = 12;
    cout << pow(A,B);
    cout << pow(A,x);

    return 0;
}



******************************************************************************



//////////////////////////////////////////////////////////////////////////////////////////////
********************************************************************************************
//////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////
********************************** Dynamic Programming *********************************
//////////////////////////////////////////////////////////////////////////////////////////////

******************** longest increasing subsequence ************************

vector<int> ar,ans,tmp;
int n,mx;
void lis(int pos,int pre){
    if(pos==n){
        if(tmp.size()>mx){
            mx=tmp.size();
            ans=tmp;
        }
        return;
    }
    if(ar[pre]<ar[pos] || !pos){
        tmp.push_back(ar[pos]);
        lis(pos+1,pos);
        tmp.pop_back();
    }
    lis(pos+1,pre);
}

********* or *********

int lis(int pos,int pre){
    if(pos == n)return 0;

    int a = lis(pos+1,pre),b=0;
    if(pre<ar[pos] || !pos)b=lis(pos+1,ar[pos])+1;

    return max(a,b);
}

******** best ********

vector<vector<int> > mark;

int lis(int pos,int pre){
    if(mark[pos][pre] != -1)return mark[pos][pre];

    if(pos == n)return mark[pos][pre]=0;

    int a = lis(pos+1,pre),b=0;
    if(ar[pre]<ar[pos] || !pos)b=lis(pos+1,pos)+1;

    return mark[pos][pre] = max(a,b);
}

*****************************************************************************


********************** Combination ***************************

ll ar[10000][10000];

ll ncr(int n,int r){
    if(r==1)return n;if(n==r)return 1;
    ll a,b;

    if(ar[n-1][r])a=ar[n-1][r];
    else{
        a=ncr(n-1,r);
        ar[n-1][r]=a;
    }

    if(ar[n-1][r-1])b=ar[n-1][r-1];
    else{
        b=ncr(n-1,r-1);
        ar[n-1][r-1]=b;
    }

    return ar[n][r]=a+b;
}

***************************************************************


//////////////////////////////////////////////////////////////////////////////////////////////
********************************************************************************************
//////////////////////////////////////////////////////////////////////////////////////////////






int main(){

    //-------------------
    //-------------------
    //-------------------
    //-------------------
    //-------------------

    return 0;
}

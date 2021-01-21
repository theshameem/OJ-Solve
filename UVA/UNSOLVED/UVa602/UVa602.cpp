#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
typedef vector<int>         vi;
typedef vector<ll>          vll;

#define ff                  first
#define sf                  scanf
#define pf                  printf
#define ss                  second
#define ppb                 pop_back
#define pb                  push_back
#define MP                  make_pair
#define MAXN                1010
#define MOD                 100000007
#define inf                 0x3f3f3f3f
#define PI                  (2.0*acos(0.0))
#define INF                 0x3f3f3f3f3f3f3f3f
#define rev(v)              reverse(all(v))
#define all(v)              v.begin(), v.end()
#define __lcm(x, y)         (x * y) / __gcd(x, y)
#define FOR(i, x, y)        for(int i = x; i < y; i++)
#define RFOR(i, x, y)       for(int i = x; i >= y; i--)
#define MEM(arr, val)       memset(arr, val, sizeof(arr));
#define unq(v)              (v).resize(unique(all(v)) - v.begin())
#define READ()              freopen("input.txt", "r", stdin)
#define WRITE()             freopen("output.txt", "w", stdout)
#define si(n)               scanf("%d", &n)
#define sl(n)               scanf("%lld", &n)
#define sii(a, b)           scanf("%d %d", &a, &b)
#define sll(a, b)           scanf("%lld %lld", &a, &b)
#define siii(a, b, c)       scanf("%d %d %d", &a, &b, &c)
#define slll(a, b, c)       scanf("%lld %lld %lld", &a, &b, &c)
#define siiii(a, b, c, d)   scanf("%d %d %d %d", &a, &b, &c, &d)
#define sllll(a, b, c, d)   scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
#define vout(v)             for(int i = 0; i < v.size(); i++) {cout << v[i]; if(i < v.size() - 1) cout << ' '; else cout << endl;}

ll month, day, year, total = 0;
int dayofMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string dayName[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
string monthName[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

bool leapYear(){
	if(year % 400 == 0) return true;
	if(year % 100 == 0) return false;
	if(year % 4 == 0) return true;
	return false;
}

bool invalid(){
	if(month > 12 || day > 31) return true;
	if(month == 2){
		if(day > 29) return true;
		if(day == 29 && !leapYear()) return true;
	}
	if(dayofMonth[month - 1] < day && month != 2) return true;
	return false;
}

string ajk(){
	total = ((year - 1) * 365);
	total += (year / 4 + year / 400 - year / 100);
	total += day;
	FOR(i, 0, month - 1) total += dayofMonth[i];
	//if(leapYear() && month <= 2 && day < 29) --total;
	//cout << total << endl;
	total %= 7;
	if(total == 0) total = 1;
	return dayName[total - 1];
}

int main(){
    #ifndef ONLINE_JUDGE
        double start = clock(); READ(); WRITE();
    #endif
        while(slll(month, day, year)){
        	if(month == 0 && day == 0 && year == 0) break;
        	
        	if(invalid()){
        		pf("%lld/%lld/%lld is an invalid date.\n", month, day, year);
        		continue;
        	}
        	cout << monthName[month - 1] << " " << day << ", " << year << " is a " << ajk() << endl;
        }

    #ifndef ONLINE_JUDGE
        printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}
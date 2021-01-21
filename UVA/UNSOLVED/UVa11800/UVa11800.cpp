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
#define MAXN                1000
#define MOD                 10000007
#define inf                 0x3f3f3f3f
#define PI                  (2.0*acos(0.0))
#define INF                 0x3f3f3f3f3f3f3f3f
#define rev(v)              reverse(all(v))
#define all(v)              v.begin(), v.end()
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

vector<double> sideLength;
vector<pair<int, int> > v(4);
bool Square();
bool Rhombus();
bool Rectangle();
void someCalculation();
double distance(int x1, int y1, int x2, int y2);

int main(){
	#ifndef ONLINE_JUDGE
		double start = clock(); READ(); WRITE();
	#endif
		int tc, cs = 0; si(tc);
		while(tc--){
			FOR(i, 0, 4) cin >> v[i].ff >> v[i].ss;
			someCalculation();
			pf("Case %d: ", ++cs);
			if(Square()) puts("Square");
			else if(Rectangle()) puts("Rectangle");
			else if(Rhombus()) puts("Rhombus");
			else puts("maf koira den vai");
			sideLength.clear();
		}

	#ifndef ONLINE_JUDGE
		printf("\n>>Runtime: %.10fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	#endif

	return 0;
}

bool Square(){
	if(sideLength.size() == 2){
		double diagonals = sideLength[1];
		double side = sqrt(2.0) * sideLength[0];
		if(to_string(diagonals) == to_string(side)) return true;
	}
	return false;
}

bool Rectangle(){
	if(sideLength.size() == 3){
		double diagonals = sqrt( (sideLength[0] * sideLength[0]) + (sideLength[1] * sideLength[1]));
		//cout << diagonals << " " << sideLength[2] << endl;
		if(to_string(diagonals) == to_string(sideLength[2])) return true;
	}
	return false;
}

bool Rhombus(){
	//cout << sideLength.size() << endl;
	//cout << endl;
	//FOR(i, 0, sideLength.size()) cout << sideLength[i] << " ";
	//cout << endl;
	//if(sideLength.size() == 3) return true;
	return false;
}

void someCalculation(){
	FOR(i, 0, 4){
		FOR(j, i + 1, 4){
			double res = distance(v[i].ff, v[i].ss, v[j].ff, v[j].ss);
			sideLength.pb(res);
		}
	}
	sort(all(sideLength)); unq(sideLength);
}

double distance(int x1, int y1, int x2, int y2){
	return sqrt( ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)) ) * 1.0000;
}
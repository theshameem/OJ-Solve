/*
	Solved!
	Date: 10-04-18
	Time: 12:02:06 PM
*/

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int decToBi(int a) {
    int binary = 0;
    int remainder, i = 1;

    while (a != 0)
    {
        remainder = a % 2;
        a /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

int main(){
	/*
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/
	
	int t, result, cases = 0;
	int dec_a, dec_b, dec_c, dec_d;
	int bi_a, bi_b, bi_c, bi_d;
	
	scanf("%d", &t);

	while(t--){
		scanf("%d.%d.%d.%d", &dec_a, &dec_b, &dec_c, &dec_d);
		scanf("%d.%d.%d.%d", &bi_a, &bi_b, &bi_c, &bi_d);

		if(decToBi(dec_a) == bi_a && decToBi(dec_b) == bi_b && decToBi(dec_c) == bi_c && decToBi(dec_d) == bi_d){
			result = 1;
		} else {
			result = 0;
		}
		

		if(result == 1){
			printf("Case %d: Yes\n", ++cases);
		} else {
			printf("Case %d: No\n", ++cases);
		}
	}

	return 0;
}
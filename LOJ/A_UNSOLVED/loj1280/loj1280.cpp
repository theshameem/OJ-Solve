/*
    Approach totally wrong. See you later
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct grades{
    double gpa, o_marks, t_marks; 
};
bool cmp(struct grades x, struct grades y){
    if(x.gpa == y.gpa){
        return x.o_marks > y.o_marks;
    }
    return x.gpa < y.gpa;
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll tc, i, j, n, d, cases = 0;

    scanf("%lld", &tc);

    while(tc--){
        scanf("%lld %lld", &n, &d);
        struct grades give[n];
        for(i = 0; i < n; i++){
            scanf("%lf %lf", &give[i].o_marks, &give[i].t_marks);
            give[i].gpa = (give[i].o_marks / give[i].t_marks) * 100.0;
        }
        sort(give, give + n, cmp);
        /*for(i = 0; i < n; i++){
            printf("%lf %lf %lf\n", give[i].o_marks, give[i].t_marks, give[i].gpa);
            //give[i].gpa = (give[i].o_marks / give[i].t_marks) * 100.0;
            //sort(give, give + n, cmp);
        }*/
        double t_o_marks = 0, total_marks = 0;
        for(i = d; i < n; i++){
            t_o_marks += give[i].o_marks;
            total_marks += give[i].t_marks;
        }
        double res = (t_o_marks / total_marks) * 100.0;
        printf("Case %lld: %.10lf\n", ++cases, res);

    }

    return 0;
}

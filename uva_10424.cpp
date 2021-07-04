#include<bits/stdc++.h>

#define pi 2*cos(0.0)
#define ll long long
#define mxsz 2e5+10

#define ABS(a) (a>0)? a : -(a)
#define MAX(a,b) (a>b)? a : b
#define MIN(a,b) (a<b)? a : b
#define SQ(a) a*a

using namespace std;

ll SummingDigits( ll n ){
    ll c, z = 0, cnt = 0;
    while( n!= 0 ){
        c = n % 10;
        z = z + c;
        n /= 10;
        cnt++;
    }
    if(cnt == 1)
        return z;
    else{
        SummingDigits(z);
    }
}
ll AddingLetter( char *a){
    ll val = 0;
    for( int i = 0; a[i]!='\0'; i++){
            if(islower(a[i]))
                val += a[i] - 96;
            else
                val += a[i] - 64;

    }
    return val;
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(NULL);

    ll val, ra, rb, mx, mn;
    double res;
    char a[100], b[100];
    while( scanf("%s %s", a, b) == 2 ){
        val = AddingLetter(a);
        //cout << "Initial : " << val << '\n' ;
        ra = SummingDigits( val );
        //cout << "Final : " << ra << '\n' ;

        val = AddingLetter(b);
        //cout << "Initial : " << val << '\n' ;
        rb = SummingDigits( val );
        //cout << "Final : " << rb << '\n' ;

        mx = MAX(ra, rb);
        mn = MIN(ra, rb);
        res = (100 * mn) / mx;
        printf("%.2lf %\n",res);
    }

    return 0;
}



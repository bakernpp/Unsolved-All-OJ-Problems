#include<bits/stdc++.h>
#include<cstring>

#define pi 2*cos(0.0)
#define ll long long
#define mxsz 2e5+10

#define ABS(a) (a>0)? a : -(a)
#define MAX(a,b) (a>b)? a : b
#define MIN(a,b) (a<b)? a : b
#define SQ(a) a*a

using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(NULL);

    ll n, sum = 0, tk, len;
    char str[100], op[10];


    cin >> n;
    while( n-- ){

        getchar();
        gets( str );
        len = strlen(str);
        if( len > 6 ){
            sscanf(str, "%s %lld\n", op, &tk);
            sum += tk;
        }
        else cout << sum << '\n';
    }

    return 0;
}




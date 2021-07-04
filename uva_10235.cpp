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
ll Reverse( ll n ){
    ll c, z = 0;
    while( n!= 0 ){
        c = n % 10;
        z = 10 * z + c;
        n /= 10;
    }
    return z;
}
int IsPrimeorNot(ll n){

    ll sq = sqrt(n);
    for( int i = 2; i <= sq; i++){
        if( n % i == 0)
            return 0;
    }
    return 1;

}
int main(){

    ll n, rd;
    while( cin >> n ){
        if(IsPrimeorNot(n)){
            //cout << "prime";
            rd = Reverse(n);
            if(IsPrimeorNot( rd )){
                cout << n <<" is emirp.\n";
            }
            else
                cout << n <<" is prime.\n";
        }
        else
            cout << n <<" is not prime.\n";
    }
    return 0;
}

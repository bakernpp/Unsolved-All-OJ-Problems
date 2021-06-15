
#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
#include<cstring>
#define MAX(a,b) a>b
#define MIN(a,b) a<b
#define pi acos(-1.0)
#define ll long long


using namespace std;
int main(){

   // freopen( "in.txt", "r", stdin);
    ll n, arr[10005], diff, cnt=0;
    ll c = 0, tag;
    //while( c < 20 ){
        cin >> n;
        tag = 1;
        for( int i = 0; i < n; i++){
            cin >> arr[i];
            if(i > 0){
                diff = abs( arr[i] - arr[i-1] );
                if( diff < n){
                    cnt++;
                    tag = 1;
                }

                else{
                    tag = 0;
                }
            }
        }
        if( tag )
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
        c++;
   // }
    return 0;
}




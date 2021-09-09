#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){

    int year;
    cout << '\\';
    while(cin >> year){
        if(  ((year % 4 == 0)&&(year%100 != 0)) || (year % 400 == 0)    ){
            cout << "This is leap year.\n" ;
        }
        if(year % 15 == 0)
                cout << "This is huluculu festival year.\n" ;
        else if(year % 55 == 0)
            cout << "This is bulukulu festival year.\n" ;
        else{
            if(((year % 4 == 0)&&(year%100 != 0)) || (year % 400 == 0)    )
            cout << "This is an ordinary year.\n";
        }


        cout << "\n";
    }
    return 0;
}


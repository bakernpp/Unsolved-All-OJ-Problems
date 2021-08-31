#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){

    int h, u, d, f, day;
    double initHeight, dc, Hclimb, Hslides;
    while(cin >> h >> u >> d >> f){
        if(h == 0) break;
        dc = u;
        day = 1;
        initHeight = 0;
        cout << "Day \t Initial Height \t Distance Climb \t Height After Climbing \t Height After Sliding\n";
        do{
            dc = dc - (( f / 100 ) * u);
            Hclimb = dc + initHeight;
            Hslides = Hclimb - 1;
            printf("%d\t %lf\t %lf\t %lf\t %lf\n", day, initHeight, dc, Hclimb, Hslides);
            if(Hclimb > h){
                cout << "success on day " << day << "\n";
                break;
            }
            if(Hslides < 0){
                cout << "failure on day " << day << "\n";
                break;
            }
            day++;
            initHeight = Hslides;

        }while( (Hclimb <= h) || (Hslides > 0) );
    }


    return 0;
}


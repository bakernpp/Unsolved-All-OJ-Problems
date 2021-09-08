#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){

    char word[100], ch, s[100];
    int i, len, p, d;
    map<int,int> mp;
    while(gets(s)){
        for(i = 0; s[i]!='\0'; i++){
           d = s[i] - 0;
           mp[d]++;
        }

        for(auto it : mp){
            cout << it.first << " " << it.second <<endl;
        }
        //cout << mp.size();
        mp.clear();
        cout << "\n\n";
    }
    return 0;
}


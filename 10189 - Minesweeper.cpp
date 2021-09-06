#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){


    int s[101][101],n, m, i, j, cnt;
    char ch;
    while(cin >> n >> m){

        if(n == 0 && m == 0) break;
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                scanf("%c",&ch);
                s[i][j] = ch;
                //printf("%c",s[i][j]);
            }
        }

        cnt = 0;
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                if(s[i][j]!= '*'){
                    if(s[i-1][j-1] == '*') cnt++;
                    if(s[i][j-1] == '*') cnt++;
                    if(s[i+1][j-1] == '*') cnt++;
                    if(s[i-1][j] == '*') cnt++;
                    if(s[i+1][j] == '*') cnt++;
                    if(s[i-1][j+1] == '*') cnt++;
                    if(s[i][j+1] == '*') cnt++;
                    if(s[i+1][j+1] == '*') cnt++;
                    cout << cnt;
                }
                else
                    printf("%c",s[i][j]);
            }
            cout << "\n";
        }


    }
    return 0;
}

#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){

    char word[100], ch, S[105];
    int i, len, p, k;
    while(gets(S)){
        p = 0;
        for(i = 0; S[i]!='\0'; i++){
            if( S[i] == ' ' || S[i+1] == '\0'){
                if(S[i+1] == '\0') word[p++] = S[i];
                word[p] = '\0';
                len = strlen(word);
                //cout << len <<endl;
                for( k = len - 1; k >= 0; k--){
                    printf("%c",word[k]);
                }
                cout << ' ';
                p = 0;
            }
            else{
                word[p++] = S[i];
            }
        }
        cout << "\n";


    }
    return 0;
}

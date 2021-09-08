#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){

    char word[100], ch;
    int k = 0, i, len;
    while(( ch = getchar()) != EOF ){
        if(! isspace(ch)){
            word[k++] = ch;
        }
        else{
            word[k] = '\0';
            k = 0;
            len = strlen(word);
            //cout << len <<endl;
            for( i = len - 1; i >= 0; i--){
                printf("%c",word[i]);
            }
        }

    }
    return 0;
}

  #include<bits/stdc++.h>
    #include<cstdio>
    #include<cstring>
    using namespace std;
    int main(){

        int wordcnt, k;
        char s[1003], ch;
        while(gets(s)){
            wordcnt = k = 0;
            for(int i = 0; s[i]!='\0'; i++){
                ch = s[i];
                if(((ch >='a' && ch<='z') || (ch>='A' && ch <= 'Z'))){
                    k++;
                    //cout << k <<"\n";
                }

                else if(ch == ' '  || ispunct(ch) || s[i+1] == '\0')       {
                    if(k>0){
                        //cout << k <<"\n";
                        wordcnt++;
                        k = 0;
                    }
                }
            }
            printf("%d\n",wordcnt);


        }
        return 0;
    }

#include<bits/stdc++.h>
using namespace std;

bool status[1000000 + 1];

void  Sieve(int N, int C) {

    int sq = sqrt(N);

    for (int i = 4; i <= N; i += 2) {
        status[i] = 1;
    }

    for (int i = 3; i <= sq; i += 2) {
        if (status[i] == 0) {
            for (int j = i * i; j <= N; j += i)
                status[j] = 1;
        }
    }

    status[1] = 1;

    int cnt = 0;
    for (int i = 1; i <= N; i ++) {
        if (status[i] == 0) {
            cnt++;
            cout << i << " ";
        }
    }
    cout << "\ntotal prime numbers = " << cnt;
    if(C > cnt){
        cout << "1";
        for (int i = 1; i <= N; i ++) {
            if (status[i] == 0) {
                cout << " " << i;
            }
        }
    }
}
int main(){

    int C, N;
    cin >> N >> C;
    Sieve(N, C);

    return 0;
}

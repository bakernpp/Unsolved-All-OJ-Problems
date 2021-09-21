#include<bits/stdc++.h>
using namespace std;

bool status[1000000 + 1];

void  Sieve(int N) {

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
}
void test(int N){
	int sqq=N/2;
    int f = 0;
	for (int i = sqq; i >=1; i--) {
        if (status[i] == 0) {
            int  r = N - i;
            if (status[r] == 0) {
                cout << N << " is the sum of " <<  i << " and " << r << ".\n";
                f = 1;
                break;
            }
        }
    }
    if(f == 0){
        cout << N << " is not the sum of two primes!\n";
    }
}
int main(){

    int C, N;
    Sieve(100000000);
	while(cin >> N){
		test(N);
	}

    return 0;
}

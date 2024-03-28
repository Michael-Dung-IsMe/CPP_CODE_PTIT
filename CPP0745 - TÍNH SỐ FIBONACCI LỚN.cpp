#include <iostream>
#define MOD 1000000007
using ll = long long;
using namespace std;

ll fib[1005];

void fibo(){
	fib[0] = 0; fib[1] = 1;
	for(int i = 2; i < 1000; ++i){
		fib[i] = (fib[i-1]%MOD + fib[i-2]%MOD)%MOD;
	}
}

int main(){
	fibo();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << fib[n] << '\n';
	}
	return 0;
}
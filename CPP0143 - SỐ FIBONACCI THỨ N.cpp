#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fibo(int n){
	ll fib[93];
	fib[0] = 1;
	fib[1] = 1;
	for(int i = 2; i < n; ++i)
		fib[i] = fib[i-1] + fib[i-2];
	return fib[n-1];
}

void solve(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << fibo(n) << "\n";
	}
}

int main(){
	solve();
	return 0;
}
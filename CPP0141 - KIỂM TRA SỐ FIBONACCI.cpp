#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fibo(ll n){
	ll fib[92] = {0};
	fib[0] = 0;
	fib[1] = 1;
	for(ll i = 2; i < 92; ++i)
		fib[i] = fib[i-1] + fib[i-2];
	for(ll i = 0; i < 92; ++i){
		if(fib[i] == n) return 1;
	}
	return 0;
}

void solve(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(fibo(n))
			cout << "YES\n";
		else cout << "NO\n";
	}
}

int main(){
	solve();
	return 0;
}
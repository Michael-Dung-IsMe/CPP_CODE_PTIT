#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int fib(ll fibo[], ll n){
	for(int i = 0; i < 93; ++i){
		if(fibo[i] == n)
			return 1;
		if(fibo[i] > n) break;
	}
	return 0;
}

void solve(){
	ios_base::sync_with_stdio(0);
	ll fibo[93];
	fibo[0] = 0; fibo[1] = 1;
	for(int i = 2; i < 93; ++i)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n+2];
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			if(fib(fibo, a[i]))
				cout << a[i] << " ";
		}
		cout << "\n";
	}
}

int main(){
    solve();
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		ll n, k, sum = 1; cin >> n >> k;
		for(ll i = 2; i <= n; ++i)
			sum += i%k;
		cout << sum << "\n";
	}
}

int main(){
	solve();
	return 0;
}
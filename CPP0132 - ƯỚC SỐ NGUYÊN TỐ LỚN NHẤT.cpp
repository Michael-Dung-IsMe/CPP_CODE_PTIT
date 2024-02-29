#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll checkP(ll n){
	if(n == 2 || n == 3)
		return 1;
	if(n == 1 || !(n%2) || !(n%3))
		return 0;
	for(ll i = 5; i*i <= n; i += 6){
		if(!(n%i) || !(n%(i+2)))
			return 0;
	}
	return 1;
}

void solve(){
	int t; cin >> t;
	while(t--){
		ll n, a[100] = {0}, cnt = 0; cin >> n;
		for(ll i = 2; i*i <= n; ++i){
			if(!(n%i) && checkP(i)){
				a[cnt++] = i;
				while(!(n%i))
					n /= i;
			}
		}
		if(n > 1 && checkP(n))
			a[cnt++] = n;
		cout << a[cnt-1] << "\n";
	}
}

int main(){
	solve();
	return 0;
}
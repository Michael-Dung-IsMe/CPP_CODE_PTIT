#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int checkP(ll n){
	if(n == 2 || n == 3)	return 1;
	if(n == 1 || !(n%2) || !(n%3))	return 0;
	for(ll i = 5; i*i <= n; i += 6){
		if(!(n%i) || !(n%(i+2)))
			return 0;
	}
	return 1;
}

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		ll a, b, x; cin >> a >> b;
		x = sqrt(a);
		int cnt = 0;
		for(ll i = x; i*i <= b; ++i){
			if(checkP(i))
				cnt++;
		}
		cout << cnt << "\n";
	}
}

int main(){
    solve();
    return 0;
}
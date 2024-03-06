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
		ll n; cin >> n;
		int cnt = 0;
		for(ll i = 2; i*i <= n; ++i){
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
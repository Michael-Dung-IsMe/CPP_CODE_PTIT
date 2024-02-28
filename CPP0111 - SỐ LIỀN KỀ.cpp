#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll k = n%10, check = 1;
		n /= 10;
		while(n){
			if((n%10) + 1 != k && (n%10) - 1 != k){
				check = 0;
				break;
			}
			k = n%10;
			n /= 10;
		}
		if(check) cout << "YES\n";
		else cout << "NO\n";
	}
}

int main(){
	solve();
	return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll x;
		map<ll, int> m;
		for(int i = 0; i < n; ++i){
			cin >> x;
			if(x >= 0 && x <= n) m[x]++;
		}
		for(int i = 0; i < n; ++i){
			if(m[i]) cout << i << " ";
			else cout << "-1 ";
		}
		cout << "\n";
	}
}

int main(){
	solve();
	return 0;
}
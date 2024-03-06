#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
	if(a == 0) return b;
	return gcd(b%a, a);
}

void solve(){
	int t; cin >> t;
	while(t--){
		ll a, x, y;
		cin >> a >> x >> y;
		ll g = gcd(x, y);
		for(int i = 1; i <= g; ++i)
			cout << a;
		cout << "\n";
	}
}

int main(){
    solve();
    return 0;
}
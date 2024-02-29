#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
	if(a == 0) return b;
	return gcd(b%a, a);
}

ll lcm(ll a, ll b){
	return (a * b)/gcd(a, b);
}

void solve(){
	int t; cin >> t;
	while(t--){
		ll a, b; cin >> a >> b;
		cout << lcm(a, b) << " " << gcd(a, b) << endl;
	}
}

int main(){
	solve();
	return 0;
}

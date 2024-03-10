#include <iostream>
#include <cmath>
#define ll long long
#define MOD 1000000007
using namespace std;

/*
	Tìm số nhỏ nhất >= k và chia hết cho x, y, z
	CT: ((k + m - 1)/m) * m 		(Với m = lcm(x, y, z));
*/

ll gcd(ll a, ll b){
	if(a == 0) return b;
	return gcd(b%a, a);
}

ll lcm(ll a, ll b){
	return (a * b)/gcd(a, b);
}

void solve(){
	ios_base::sync_with_stdio(false);
	int t; cin >> t;
	while(t--){
		ll x, y, z, n;
		cin >> x>> y >> z >> n;
		ll k = pow(10, n - 1), m = lcm(lcm(x, y), z);
		ll res = (k + m - 1)/m * m;
		if(res >= (ll)pow(10, n)) cout << "-1\n";
		else cout << res << "\n";
	}
}

int main(){
	solve();
	return 0;
}
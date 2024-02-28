#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n; cin >> n;
	ll sum = 0;
	for(ll i = 1; i <= n; ++i){
		ll mul = 1;
		for(ll j = 1; j <= i; ++j)
			mul *= j;
		sum += mul;
	}
	cout << sum;
	return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int minPrime(int n){
	if(n == 1) return 1;
	if(!(n%2)) return 2;
	for(int i = 3; i*i <= n; ++i){
		if(!(n%i))
			return i;
	}
	return n;
}

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 1; i <= n; ++i)
			cout << minPrime(i) << " ";
		cout << "\n";
	}
}

int main(){
    solve();
    return 0;
}
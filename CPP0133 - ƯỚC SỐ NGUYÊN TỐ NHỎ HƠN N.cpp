#include <bits/stdc++.h>
#define ll long long
using namespace std;

int checkP(int n){
	if(n == 2 || n == 3)
		return 1;
	if(n == 1 || !(n%2) || !(n%3))
		return 0;
	for(int i = 5; i*i <= n; i += 6){
		if(!(n%i) || !(n%(i+2)))
			return 0;
	}
	return 1;
}

void solve(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 2; i <= n; ++i){
			if(checkP(i))
				cout << i << " ";
		}
		cout << "\n";
	}
}

int main(){
	solve();
	return 0;
}
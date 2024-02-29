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
		int n, check = 0; cin >> n;
		for(int i = 2; i <= n/2; ++i){
			if(checkP(i) && checkP(n-i)){
				cout << i << " " << n-i << endl;
				check = 1;
				break;
			}
		}
		if(!check)
			continue;
	}
}

int main(){
	solve();
	return 0;
}
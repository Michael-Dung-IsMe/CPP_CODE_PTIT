#include <bits/stdc++.h>
#define ll long long
using namespace std;

int checkP(int n){
	if(n == 2 || n == 3)
		return 1;
	if(n == 1 || !(n%2) || !(n%3))
		return 0;
	for(int i = 5; i*i <= n;){
		if(!(n%i) || !(n%(i+2)))
			return 0;
		i += 6;
	}
	return 1;
}

void solve(){
	int n; cin >> n;
	if(checkP(n)) cout << "YES\n";
	else cout << "NO\n";
}

int main(){
	solve();
	return 0;
}
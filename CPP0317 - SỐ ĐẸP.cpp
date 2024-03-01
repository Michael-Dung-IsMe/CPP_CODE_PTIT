#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; cin >> s;
		int n = s.size(), check = 1;
		for(int i = 0; i <= n/2; ++i){
			if(s[i]%2 || s[n - 1 - i]%2 || s[i] != s[n - 1 - i]){
				check = 0; break;
			}
		}
		if(check) cout << "YES\n";
		else cout << "NO\n";
	}
}

int main(){
	solve();
	return 0;
}
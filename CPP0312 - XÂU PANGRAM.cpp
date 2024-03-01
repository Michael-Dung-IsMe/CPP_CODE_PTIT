#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; cin >> s;
		int k, n = s.size(); cin >> k;
		int a[26] = {0};
		for(int i = 0; i < n; ++i)
			a[s[i] - 'a']++;
		int count = 0;
		for(int i = 0; i < 26; ++i){
			if(!a[i])	count++;
		}
		if(k >= count) cout << "1\n";
		else cout << "0\n";
	}
}

int main(){
	solve();
	return 0;
}
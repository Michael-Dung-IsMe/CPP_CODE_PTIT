#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	string s; cin >> s;
	int n = s.size();
	for(int i = 0; i < n; ++i){
		s[i] = tolower(s[i]);
		if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
			cout << "." << s[i];
		}
	}
}

int main(){
	solve();
	return 0;
}
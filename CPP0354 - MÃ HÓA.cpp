#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; cin >> s;
		int a[26] = {0}, n = s.length(), cnt = 0;
		char c[26];
		for(int i = 0; i < n; ++i){
			c[cnt++] = s[i];
			a[s[i] - 'A']++;
			while(s[i] == s[i+1]){
				a[s[i] - 'A']++;
				i++;
			}
		}
		for(int i = 0; i < cnt; ++i){
			cout << (char)c[i] << a[c[i] - 'A'];
		}
		cout << "\n";
	}
}

int main(){
	solve();
	return 0;
}
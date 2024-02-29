#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int a[26] = {0};
		string s; cin >> s;
		int n = s.size();
		for(int i = 0; i < n; ++i)
			a[s[i] - 'A']++;
		for(int i = 0; i < n; ++i){
			if(a[s[i] - 'A'] == 1)
				cout << s[i];
		}
		cout << endl;
	}
}

int main(){
	solve();
	return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	set<string> se;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		se.insert(s);
	}
	cout << se.size() << endl;
}
int main(){
	solve();
	return 0;
}
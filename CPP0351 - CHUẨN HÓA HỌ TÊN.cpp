#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
using ll = long long;
using namespace std;

string change(string s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); ++i) s[i] = tolower(s[i]);
	return s;
}

void solve(){
	int t; cin >> t;
	while(t--){
		int n, cnt = 0; cin >> n;
		cin.ignore();
		string s, tmp, res[60] = {}; getline(cin, s);
		stringstream ss(s);
		while(ss >> tmp)
			res[cnt++] = change(tmp);
		if(n == 1){
			cout << res[cnt-1] << ' ';
			for(int i = 0; i < cnt - 1; ++i) cout << res[i] << ' ';
		}
		else{
			for(int i = 1; i < cnt; ++i) cout << res[i] << ' ';
			cout << res[0];
		}
		cout << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	solve();
	return 0;
}
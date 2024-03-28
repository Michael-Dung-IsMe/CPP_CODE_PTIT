#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		vector<string> v;
		string s, tmp; getline(cin, s);
		stringstream ss(s);
		while(ss >> tmp) v.push_back(tmp);
		reverse(v.begin(), v.end());
		for(auto x : v) cout << x << ' ';
		cout << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	solve();
	return 0;
}
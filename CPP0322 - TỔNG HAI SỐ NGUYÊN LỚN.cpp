#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

void sum(string a, string b){
	string res = "";
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int du = 0;
	for(unsigned int i = 0; i < a.size(); ++i){
		int tmp = a[i] - '0' + du;
		du = 0;
		if(i < b.size()) tmp += b[i] - '0';
		if(tmp >= 10){
			du = 1;
			tmp %= 10;
		}
		res.push_back(tmp + '0');
	}
	if(du) res.push_back('1');
	reverse(res.begin(), res.end());
	cout << res << endl;
}

void fix(string &c){
	reverse(c.begin(), c.end());
	while(c.back() == '0') c.pop_back();
	reverse(c.begin(), c.end());
}

void solve(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string a, b;
		cin >> a >> b;
		if(a.size() < b.size() || (a.size() == b.size() && a < b)) swap(a, b);
		sum(a, b);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	solve();
	return 0;
}
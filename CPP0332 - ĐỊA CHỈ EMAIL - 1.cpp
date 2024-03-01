#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	string s, tmp, s1[105]; getline(cin, s);
	int n = s.size(), cnt = 0;
	for(int i = 0; i < n; ++i)
		s[i] = tolower(s[i]);
	stringstream ss(s);
	while(ss >> tmp)
		s1[cnt++] = tmp;
	cout << s1[cnt - 1];
	for(int i = 0; i < cnt - 1; ++i)
		cout << s1[i].substr(0, 1);
	cout << "@ptit.edu.vn";
}

int main(){
	solve();
	return 0;
}
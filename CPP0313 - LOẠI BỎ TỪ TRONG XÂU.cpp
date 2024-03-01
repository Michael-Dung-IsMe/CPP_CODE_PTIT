#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	string s1, s2, tmp;
	getline(cin, s1); cin >> s2;
	stringstream ss(s1);
	while(ss >> tmp){
		if(tmp.compare(s2))
			cout << tmp << " ";
	}
}
int main(){
	solve();
	return 0;
}
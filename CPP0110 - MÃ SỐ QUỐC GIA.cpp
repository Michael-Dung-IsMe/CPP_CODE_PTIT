#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; cin >> s;
		cout << s.erase(s.find("084"), 3) << "\n";
	}
}
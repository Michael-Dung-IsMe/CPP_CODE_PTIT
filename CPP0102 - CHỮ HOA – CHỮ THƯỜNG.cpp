#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		char c; cin >> c;
		if('a' <= c && c <= 'z') cout << (char)(c - 32);
		if('A' <= c && c <= 'Z') cout << char(c + 32);
		cout << "\n";
	}
	return 0;
}
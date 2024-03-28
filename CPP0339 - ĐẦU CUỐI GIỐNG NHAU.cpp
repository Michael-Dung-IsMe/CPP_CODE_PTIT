#include <iostream>
#include <string>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int sz = s.size(), a[26] = {};
		for(auto x : s)
			a[x - 'a']++;
		for(int i = 0; i < 26; ++i)
			sz += a[i] * (a[i] - 1)/2;
		cout << sz << endl;
	}
}
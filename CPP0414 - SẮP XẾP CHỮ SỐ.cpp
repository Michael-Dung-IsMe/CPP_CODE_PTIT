#include <iostream>
#include <string>
#include <iomanip>
#define ll long long
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, a[10] = {0}; cin >> n;
		cin.ignore();
		string s; getline(cin, s);
		int k = s.size();
		for(int i = 0; i < k; ++i){
			if(s[i] >= '0' && s[i] <= '9') a[s[i] - '0']++;
		}
		for(int i = 0; i < 10; ++i)
			if(a[i]) cout << i << " ";
		cout << "\n";
	}
}

int main(){
	solve();
	return 0;
}
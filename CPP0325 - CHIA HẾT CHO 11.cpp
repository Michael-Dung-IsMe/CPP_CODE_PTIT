#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; cin >> s;
		int n = s.size(), sum1 = 0, sum2 = 0;
		for(int i = 0; i < n; ++i){
			if((i + 1)%2)
				sum2 += (s[i] - '0');
			else
				sum1 += (s[i] - '0');
		}
		if((sum1 - sum2)%11 == 0)
			cout << "1\n";
		else
			cout << "0\n";
	}
}

int main(){
	solve();
	return 0;
}
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string a; cin >> a;
		int res = 0;
		for(unsigned int i = 0; i < a.size(); ++i){
			while(a[i] >= '0' && a[i] <= '9')
				res += a[i++] - '0';
		}
		sort(a.begin(), a.end());
		reverse(a.begin(), a.end());
		while(a.back() >= '0' && a.back() <= '9') a.pop_back();
		reverse(a.begin(), a.end());
		cout << a << res << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	solve();
	return 0;
}
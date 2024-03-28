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
			int tmp = 0;
			while(a[i] >= '0' && a[i] <= '9')
				tmp = tmp*10 + (a[i++] - '0');
			res += tmp;
		}
		cout << res << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	solve();
	return 0;
}
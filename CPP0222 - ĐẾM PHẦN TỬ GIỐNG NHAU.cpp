#include <iostream>
#include <map>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int n, cnt = 0; cin >> n;
		int a[n+2][n+2];
		map<int, int> mp;
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j){
				cin >> a[i][j];
				if(mp[a[i][j]] == i)
					mp[a[i][j]] = i + 1;
			}
		}
		for(auto x : mp)
			if(x.second == n) cnt++;
		cout << cnt << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
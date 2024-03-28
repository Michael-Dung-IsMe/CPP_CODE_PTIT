#include <iostream>
#include <algorithm>
#include <map>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, ok = 0; cin >> n;
		map<int, int> m;
		for(int i = 0; i < n; ++i){
			int x; cin >> x;
			m[x]++;
			if(m[x] > 1){
				if(ok) continue;
				ok = x;
			}
		}
		if(!ok) cout << "-1\n";
		else cout << ok << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	solve();
	return 0;
}
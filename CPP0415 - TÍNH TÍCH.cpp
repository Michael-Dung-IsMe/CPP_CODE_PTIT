#include <iostream>
#include <set>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		set<ll> se1, se2;
		for(int i = 0; i < n; ++i){
			ll x; cin >> x;
			se1.insert(x);
		}
		for(int i = 0; i < m; ++i){
			int x; cin >> x;
			se2.insert(x);
		}
		ll x1 = *se1.rbegin(), x2 = *se2.begin();
		cout << x1 * x2 << "\n";
	}
}

int main(){
    solve();
    return 0;
}
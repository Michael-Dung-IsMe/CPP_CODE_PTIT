#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int k, n; cin >> k >> n;
		vector<int> v;
		for(int i = 0; i < k; ++i){
			for(int j = 0; j < n; ++j){
				int x; cin >> x;
				v.push_back(x);
			}
		}
		sort(v.begin(), v.end());
		for(auto x : v)
			cout << x << " ";
		cout << "\n";
	}
}

int main(){
    solve();
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		multiset<int> sortt;
		for(int i = 0; i < n; ++i){
			int x; cin >> x;
			sortt.insert(x);
		}
		for(int x : sortt)
			cout << x << " ";
		cout << "\n";
	}
}

int main(){
	solve();
	return 0;
}
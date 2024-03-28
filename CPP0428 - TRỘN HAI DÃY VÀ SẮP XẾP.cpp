#include <iostream>
#include <set>
#include <algorithm>
#define ll long long
#define MOD 1000000007
using namespace std;

int x;

void nhap(int c[], multiset<int> &se, int n){
	for(int i = 0; i < n; ++i){
		cin >> c[i];
		se.insert(c[i]);
	}
}

void solve(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n+1], b[m+1];
		multiset<int> se;
		nhap(a, se, n);	nhap(b, se, m);
		for(auto it = se.begin(); it != se.end(); ++it)
			cout << *it << " ";
		cout << "\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);
	solve();
	return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int n, step; cin >> n >> step;
		int a[n+2];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = step; i < n; ++i)
			cout << a[i] << " ";
		for(int i = 0; i < step; ++i)
			cout << a[i] << " ";
		cout << "\n";
	}
}

int main(){
	solve();
	return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+2];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		for(int i = 0; i < n/2; ++i)
			cout << a[n - 1 - i] << " " << a[i] << " ";
		if(n%2) cout << a[n/2];
		cout << "\n";
	}
}

int main(){
	solve();
	return 0;
}
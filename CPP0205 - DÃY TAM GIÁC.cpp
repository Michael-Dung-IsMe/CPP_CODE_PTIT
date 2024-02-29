#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int n, max = -1e9; cin >> n;
		int a[n+2];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = 0; i < n; ++i){
			if(max < a[i])
				max = a[i];
		}
		cout << max << "\n";
	}
}

int main(){
	solve();
	return 0;
}
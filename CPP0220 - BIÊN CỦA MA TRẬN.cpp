#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+2][n+2];
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j)
				cin >> a[i][j];
		}
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j){
				if(i == 0 || i == n-1 || j == 0 || j == n-1)
					cout << a[i][j] << " ";
				else cout << "  ";
			}
			cout << "\n";
		}
	}
}

int main(){
	solve();
	return 0;
}

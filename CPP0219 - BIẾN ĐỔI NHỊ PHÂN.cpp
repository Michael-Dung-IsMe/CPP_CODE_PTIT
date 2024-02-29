#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n+2][m+2], b[n+2][m+2];
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				cin >> a[i][j];
				b[i][j] = 0;
			}
		}
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				if(a[i][j] == 1){
					int k = 0;
					while(k != m)
						b[i][k++] = 1;
					k = 0;
					while(k != n)
						b[k++][j] = 1;
				}
			}
		}
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j)
				cout << b[i][j] << " ";
			cout << "\n";
		}
	}
}

int main(){
	solve();
	return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n, m, p; cin >> n >> m >> p;
	int a[n+2][55], b[55][p+2], res[57][55];
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j)
			cin >> a[i][j];
	}
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < p; ++j)
			cin >> b[i][j];
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < p; ++j){
			int sum = 0;
			for(int k = 0; k < m; ++k)
				sum += a[i][k] * b[k][j];
			res[i][j] = sum;
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < p; ++j)
			cout << res[i][j] << " ";
		cout << "\n";
	}
}

int main(){
	solve();
	return 0;
}
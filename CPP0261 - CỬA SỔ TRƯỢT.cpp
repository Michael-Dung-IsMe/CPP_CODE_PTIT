#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nhap(int x[][100], int n){
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j)
			cin >> x[i][j];
	}
}

void xuat(int x[][100], int n){
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j)
			cout << x[i][j] << " ";
		cout <<"\n";
	}
}

void solve(){
	ios_base::sync_with_stdio(0);
	int n; cin >> n;
	int a[n+2][100]; nhap(a, n);
	int m; cin >> m;
	int b[m+2][100]; nhap(b, m);
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j)
			a[i][j] *= b[i%m][j%m];
	}
	xuat(a, n);
}

int main(){
	solve();
	return 0;
}
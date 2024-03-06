#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n+2][n+2], b[n * n + 2], cnt = 0;
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j){
				cin >> a[i][j];
				b[cnt++] = a[i][j];
			}
		}
		sort(b, b + cnt);
		cout << b[k - 1] << "\n";
	}
}

int main(){
    solve();
    return 0;
}
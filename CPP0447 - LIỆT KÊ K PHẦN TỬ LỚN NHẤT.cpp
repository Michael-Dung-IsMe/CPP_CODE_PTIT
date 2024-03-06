#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n+2];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		for(int i = n - 1; i >= n - k; --i)
			cout << a[i] << " ";
		cout << "\n";
	}
}

int main(){
    solve();
    return 0;
}
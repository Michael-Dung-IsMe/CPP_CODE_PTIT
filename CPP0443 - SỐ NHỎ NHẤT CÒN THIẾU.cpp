#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int a[10000002];

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, ok = 1; cin >> n;
		for(int i = 0; i < n - 1; ++i)
			cin >> a[i];
		for(int i = 0; i < n - 1; ++i){
			if(a[i] != i + 1){
				ok = 0;
				cout << i + 1 << "\n";
				break;
			}
		}
		if(ok) cout << n << "\n";
	}
}

int main(){
    solve();
    return 0;
}

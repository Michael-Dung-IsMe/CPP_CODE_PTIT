#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int a[10000002];

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int min1 = 1e8, min2 = 1e9;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			if(a[i] < min2) min2 = a[i];
			if(min2 < min1) swap(min1, min2);
		}
		if(min1 == min2) cout << "-1\n";
		else cout << min1 << " " << min2 << "\n";
	}
}

int main(){
    solve();
    return 0;
}
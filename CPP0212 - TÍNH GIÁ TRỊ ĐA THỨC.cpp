#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		ll n, x; cin >> n >> x;
		ll a[n + 2], sum = 0, mark = 1;
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = n - 1; i >= 0; --i){
			sum = (sum + mark * a[i])%MOD;
			mark = (mark * x)%MOD;
		}
		cout << sum << "\n";
	}
}

int main(){
    solve();
    return 0;
}
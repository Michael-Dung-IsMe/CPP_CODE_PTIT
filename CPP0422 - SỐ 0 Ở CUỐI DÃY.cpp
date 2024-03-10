#include <iostream>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, cnt = 0; cin >> n;
		ll a[n+1];
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			if(!a[i]) cnt++;
			else cout << a[i] << " ";
		}
		for(int i = 0; i < cnt; ++i) cout << "0 ";
		cout << "\n";
	}
}

int main(){
    solve();
    return 0;
}
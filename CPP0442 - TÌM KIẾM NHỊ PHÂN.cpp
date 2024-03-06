#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int a[1000005];

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = 0; i < n; ++i){
			if(a[i] == x){
				cout << "1\n";	x = -1;
				break;
			}
		}
		if(x != -1) cout << "-1\n";
	}
}

int main(){
    solve();
    return 0;
}
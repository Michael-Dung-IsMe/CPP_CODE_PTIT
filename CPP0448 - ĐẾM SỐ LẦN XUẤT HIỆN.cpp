#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int a[1000002];
int b[1000002];

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, k, max = -1; cin >> n >> k;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			if(a[i] > max) max = a[i];
			b[a[i]]++;
		}
		if(b[k])	cout << b[k] << "\n";
		else	cout << "-1\n";
		for(int i = 0; i < max + 1; ++i) b[i] = 0;
	}
}

int main(){
    solve();
    return 0;
}
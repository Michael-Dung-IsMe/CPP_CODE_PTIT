#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+2];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		int mindis = 1e9;
		for(int i = 0; i < n; ++i){
			for(int j = i + 1; j < n; ++j){
				if(abs(a[i] + a[j]) < abs(mindis) && abs(a[i] + a[j]) != 0)
					mindis = a[i] + a[j];
			}
		}
		cout << mindis << "\n";
	}
}

int main(){
    solve();
    return 0;
}
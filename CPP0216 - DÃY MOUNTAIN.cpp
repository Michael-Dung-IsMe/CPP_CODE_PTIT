#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, L, R; cin >> n;
		int a[n+2], max = -1e9, check = 1, point = 0;
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		cin >> L >> R;
		for(int i = L; i <= R; ++i){
			if(a[i] > max){
				max = a[i];
				point = i;
			}
		}
		while(L < point){
			if(a[L] > a[L+1]){
				check = 0;
				break;
			}
			++L;
		}
		while(R > point){
			if(a[R] > a[R-1]){
				check = 0;
				break;
			}
			--R;
		}
		if(check) cout << "Yes\n";
		else cout << "No\n";
	}
}

int main(){
    solve();
    return 0;
}
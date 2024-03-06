#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, cnt = 0; cin >> n;
		for(int i = 1; i*i < n; ++i){
			if(!(n%i)){
				if(!(i%2)) cnt++;
				if(!((n/i)%2)) cnt++;
			}
		}
		int k = sqrt(n);
		if(k*k == n && !(k%2)) cnt++;
		cout << cnt << "\n";
	}
}

int main(){
    solve();
    return 0;
}
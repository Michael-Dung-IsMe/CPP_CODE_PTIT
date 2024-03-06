#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, p, cnt = 0; cin >> n >> p;
		for(int i = 1; i <= n; ++i){
			int k = i;
			if(!(k%p)){
				while(!(k%p)){
					cnt++; k /= p;
				}
			}
		}
		cout << cnt << "\n";
	}
}

int main(){
    solve();
    return 0;
}
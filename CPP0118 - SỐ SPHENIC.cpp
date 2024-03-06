#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int cnt = 0, check = 1;
		int n; cin >> n;
		for(int i = 2; i*i <= n; ++i){
			int mark = 0;
			if(!(n%i)){
				cnt++;
				while(!(n%i)){
					mark++;
					if(mark > 1){
						check = 0; break;
					}
					n /= i;
				}
			}
			if(!check) break;
		}
		if(n > 1) cnt++;
		if(!check || cnt != 3) cout << "0\n";
		else cout << "1\n";
	}
}

int main(){
	solve();
	return 0;
}
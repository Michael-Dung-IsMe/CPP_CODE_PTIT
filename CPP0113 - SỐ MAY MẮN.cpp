#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int n, sum = 0, check = 0, cnt = 0; cin >> n;
		while(n){
			sum += (n%10) * pow(10, cnt++);
			if(sum == 86){
				check = 1;
				break;
			}
			n /= 10;
		}
		if(check) cout << check << "\n";
		else cout << check << "\n";
	}
}

int main(){
	solve();
	return 0;
}
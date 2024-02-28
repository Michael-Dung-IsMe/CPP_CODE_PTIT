#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, check = 1; cin >> n;
		while(n){
			int k = n%10;
			if(k != 0 && k != 6 && k != 8){
				check = 0;
				break;
			}
			n /= 10;
		}
		if(!check) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}
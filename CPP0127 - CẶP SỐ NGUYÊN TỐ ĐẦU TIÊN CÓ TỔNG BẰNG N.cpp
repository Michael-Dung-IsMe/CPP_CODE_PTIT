#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int n, check = 0; cin >> n;
		if(n < 4)
			cout << "-1\n";
		else{
			for(int i = 2; i <= n/2; ++i){
				if(checkP(i) && checkP(n-i)){
					check = 1;
					cout << i << " " << n-i << endl;
					break;
				}
			}
			if(!check)
				cout << "-1\n";
		}
	}
}

int main(){
	solve();
	return 0;
}
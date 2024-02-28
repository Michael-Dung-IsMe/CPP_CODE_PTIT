#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll check = 1, a[20], cnt = 0;
		while(n){
			a[cnt++] = n%10;
			n /= 10;
		}
		for(int i = 0; i < cnt/2; ++i){
			if(a[i] != a[cnt-i-1]){
				check = 0;
				break;
			}
		}
		if(check) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
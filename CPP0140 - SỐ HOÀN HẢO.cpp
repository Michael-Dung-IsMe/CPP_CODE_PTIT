#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

/*
Nếu quét các ước theo cách thông thường --> TLE
--> Tìm đọc về số nguyên tố Mersenne --> Lý do code theo cách này
*/

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(n == 6 || n == 28 || n == 496 || n == 8128 || n == 33550336 || n == 8589869056 || n == 137438691328)
			cout << "1\n";
		else cout << "0\n";
	}
}

int main(){
	solve();
	return 0;
}
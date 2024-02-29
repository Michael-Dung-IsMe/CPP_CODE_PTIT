#include <bits/stdc++.h>
#define ll long long
using namespace std;

int rem(int n){
	int sum = 0;
	while(n){
		sum += n%10; n /= 10;
	}
	if(sum >= 10) return rem(sum);
	return sum;
}

void solve(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << rem(n) << "\n";
	}
}

int main(){
	solve();
	return 0;
}
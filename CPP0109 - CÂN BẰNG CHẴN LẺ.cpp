#include <bits/stdc++.h>
#define ll long long
using namespace std;

int div(int n){
	int odd = 0, even = 0;
	while(n){
		if(!((n%10)%2)) even++;
		else odd++;
		n /= 10;
	}
	if(even == odd) return 1;
	return 0;
}

int power(int n, int k){
	for(int i = 2; i <= k; ++i)
		n *= 10;
	return n;
}

void solve(){
	int n, cnt = 0; cin >> n;
	for(int i = power(10, n-1); i < power(10, n); ++i){
		if(div(i)){
			cout << i << " ";
			++cnt;
		}
		if(!(cnt%10))
			cout << "\n";
	}
}

int main(){
	solve();
	return 0;
}
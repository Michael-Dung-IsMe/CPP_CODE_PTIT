#include <bits/stdc++.h>
#define ll long long
using namespace std;

int checkP(int n){
	if(n == 2 || n == 3) return 1;
	if(n == 1 || !(n%2) || !(n%3)) return 0;
	for(int i = 5; i*i <= n; i += 6){
		if(!(n%i) || !(n%(i + 2)))
			return 0;
	}
	return 1;
}

int gcd(int a, int b){
	if(a == 0) return b;
	return gcd(b%a, a);
}

void solve(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(checkP(n) && n != 3) cout << "0\n";
		else if(n == 3) cout << "1\n";
		else{
			int cnt = 0;
			for(int i = 1; i < n; ++i)
				if(gcd(i,n) == 1)	cnt++;
			if(checkP(cnt))	cout << "1\n";
			else	cout << "0\n";
		}
	}
}

int main(){
    solve();
    return 0;
}
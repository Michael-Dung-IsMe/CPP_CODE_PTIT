#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		int a[100] = {0}, b[100] = {0};
		int n, cnt = 0; cin >> n;
		for(int i = 2; i*i <= n; ++i){
			if(!(n%i)){
				a[cnt] = i;
				while(!(n%i)){
					b[cnt]++; n /= i;
				}
				cnt++;
			}
		}
		if(n > 1){
			a[cnt] = n; b[cnt++]++;
		}
		for(int i = 0; i < cnt; ++i)
			cout << a[i] << " " << b[i] << " ";
		cout <<"\n";
	}
}

int main(){
	solve();
	return 0;
}
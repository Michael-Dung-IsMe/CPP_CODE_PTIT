#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int checkP(ll n){
	if(n == 2 || n == 3)	return 1;
	if(n == 1 || !(n%2) || !(n%3))	return 0;
	for(ll i = 5; i*i <= n; i += 6){
		if(!(n%i) || !(n%(i+2)))
			return 0;
	}
	return 1;
}

int findS(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(checkP(n)) cout << "NO\n";
		else{
			int a[150], cnt = 0, sum = 0, sum1 = findS(n);
			for(int i = 2; i*i <= n; ++i){
				if(!(n%i)){
					while(!(n%i)){
						a[cnt++] = i;
						n /= i;
					}
				}
			}
			if(n > 1) a[cnt++] = n;
			for(int i = 0; i < cnt; ++i)
				sum += findS(a[i]);
			if(sum == sum1) cout << "YES\n";
			else cout << "NO\n";
		}
	}
}

int main(){
    solve();
    return 0;
}
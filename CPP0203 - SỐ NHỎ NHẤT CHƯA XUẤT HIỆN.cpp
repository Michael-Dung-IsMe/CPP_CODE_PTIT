#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int a[1000005];
int b[1000005];

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, max = -1e7; cin >> n;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			if(a[i] < 0) continue;
			if(a[i] > max) max = a[i];
			b[a[i]]++;
		}
		for(int i = 1; i < max + 2; ++i){
			if(!b[i]){
				cout << i << "\n";
				break;
			}
		}
		for(int i = 0; i < max + 2; ++i) b[i] = 0;
	}
}

int main(){
    solve();
    return 0;
}
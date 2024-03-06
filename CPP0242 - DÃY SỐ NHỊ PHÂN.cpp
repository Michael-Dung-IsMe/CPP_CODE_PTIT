#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, max = 0; cin >> n;
		int a[n+2], b[n+2];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = 0; i < n; ++i)
			cin >> b[i];
		for(int i = 0; i < n; ++i){
			int max1 = 0, max2 = 0;
			for(int j = i; j < n; ++j){
				max1 += a[j];
				max2 += b[j];
				if(max1 == max2)
					max = (j - i + 1 > max ? j - i + 1 : max);
			}
		}
		cout << max << "\n";
	}
}

int main(){
    solve();
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n+2][m+2], b[n * m + 2];
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		}
		int cnt = n*m - 1, hang1 = 0, hang2 = n-1, cot1 = 0, cot2 = m-1;
		while(cnt >= 0){
			for(int i = cot1; i <= cot2; ++i)
				b[cnt--] = a[hang1][i];
			hang1++;
			for(int i = hang1; i <= hang2; ++i)
				b[cnt--] = a[i][cot2];
			cot2--;
			if(cot1 != cot2){
				for(int i = cot2; i >= cot1; --i)
					b[cnt--] = a[hang2][i];
				hang2--;
			}
			if(hang1 != hang2){
				for(int i = hang2; i >= hang1; --i)
					b[cnt--] = a[i][cot1];
				cot1++;
			}
		}
		for(int i = 0; i < n*m; ++i) cout << b[i] << " ";
		cout << "\n";
	}
}

int main(){
    solve();
    return 0;
}
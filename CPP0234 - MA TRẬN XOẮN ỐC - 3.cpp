#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, m, k, save; cin >> n >> m >> k;
		int a[n+2][m+2];
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		}
		int cnt = 0, hang1 = 0, hang2 = n-1, cot1 = 0, cot2 = m-1;
		while(cnt <= k){
			for(int i = cot1; i <= cot2; ++i){
				++cnt;
				if(cnt == k){
					save = a[hang1][i]; break;	}
			}
			if(cnt == k) break;
			hang1++;
			for(int i = hang1; i <= hang2; ++i){
				++cnt;
				if(cnt == k){
					save = a[i][cot2]; break;	}
			}
			if(cnt == k) break;
			cot2--;
			if(cot1 != cot2){
				for(int i = cot2; i >= cot1; --i){
					++cnt;
					if(cnt == k){
						save = a[hang2][i]; break;	}
				}
				hang2--;
			}
			if(cnt == k) break;
			if(hang1 != hang2){
				for(int i = hang2; i >= hang1; --i){
					++cnt;
					if(cnt == k){
						save = a[i][cot1]; break;	}
				}
				cot1++;
			}
			if(cnt == k) break;
		}
		cout << save << "\n";
	}
}

int main(){
    solve();
    return 0;
}
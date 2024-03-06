#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, m, cnt = 0; cin >> n >> m;
		int a[n+2][m+2];
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j)
				cin >> a[i][j];
		}
		int hang1 = 0, hang2 = n-1, cot1 = 0, cot2 = m-1;
		while(cnt < n * m){
			for(int i = cot1; i <= cot2; ++i){
				cout << a[hang1][i] << " "; cnt++;	}
			if(cnt >= n * m) break;
			hang1++;
			for(int i = hang1; i <= hang2; ++i){
				cout << a[i][cot2] << " "; 	cnt++;	}
			if(cnt >= n * m) break;
			cot2--;
			if(cot1 != cot2){
				for(int i = cot2; i >= cot1; --i){
					cout << a[hang2][i] << " "; cnt++;	}
				hang2--;
			}
			if(cnt >= n * m) break;
			if(hang1 != hang2){
				for(int i = hang2; i >= hang1; --i){
					cout << a[i][cot1] << " "; cnt++;	}
				cot1++;
			}
			if(cnt >= n * m) break;
		}
		cout << "\n";
	}
}

int main(){
	solve();
	return 0;
}
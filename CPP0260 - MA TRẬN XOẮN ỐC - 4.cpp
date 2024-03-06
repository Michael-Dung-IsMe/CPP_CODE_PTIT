#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	ios_base::sync_with_stdio(0);
	int n, cnt = 0; cin >> n;
	int a[n+2][n+2], b[n*n + 2];
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> a[i][j];
			b[cnt++] = a[i][j];
		}
	}
	sort(b, b + cnt);
	cnt = 0;
	int hang1 = 0, hang2 = n-1, cot1 = 0, cot2 = n-1;
	while(cnt < n*n){
		for(int i = cot1; i <= cot2; ++i)
			a[hang1][i] = b[cnt++];
		hang1++;
		for(int i = hang1; i <= hang2; ++i)
			a[i][cot2] = b[cnt++];
		cot2--;
		if(cot1 != cot2){
			for(int i = cot2; i >= cot1; --i)
				a[hang2][i] = b[cnt++];
			hang2--;
		}
		if(hang1 != hang2){
			for(int i = hang2; i >= hang1; --i)
				a[i][cot1] = b[cnt++];
			cot1++;
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j)
			cout << a[i][j] << " ";
		cout << "\n";
	}
}

int main(){
	solve();
	return 0;
}
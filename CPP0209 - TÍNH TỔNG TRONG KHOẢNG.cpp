#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct ques{
	int l, r;
};

void solve(){
	int t; cin >> t;
	while(t--){
		int n, q; cin >> n >> q;
		struct ques b[q];
		int a[n+2];
		for(int i = 0; i < n; ++i) cin >> a[i];
		for(int i = 0; i < q; ++i){
			cin >> b[i].l >> b[i].r;
			if(b[i].l > b[i].r){
				int tmp = b[i].l;
				b[i].l = b[i].r;
				b[i].r = tmp;
			}
		}
		for(int i = 0; i < q; ++i){
			int cnt = b[i].l, sum = 0;
			while(cnt <= b[i].r){
				sum += a[cnt-1];
				cnt++;
			}
			cout << sum << "\n";
		}
	}
}

int main(){
	solve();
	return 0;
}
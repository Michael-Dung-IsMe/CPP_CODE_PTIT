#include <bits/stdc++.h>
#define ll long long
using namespace std;

int cmp(const void *x, const void *y){
	return *(int *)x - *(int *)y;
}

void solve(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+2];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		qsort(a, n, sizeof(int), cmp);
		int count = 0;
		for(int i = 0; i < n; ){
			int cnt = 0;
			while(a[i] == a[i+1]){
				cnt++; ++i;
			}
			if(a[i] != a[i+1] && cnt >= 1)
				cnt++;
			count += cnt;
			++i;
		}
		cout << count << "\n";
	}
}

int main(){
	solve();
	return 0;
}

//Sử dụng map
void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		map<int, int> mp;
		for(int i = 0; i < n; ++i){
			int x; cin >> x;
			mp[x]++;
		}
		int cnt = 0;
		for(auto x : mp){
			if(x.second > 1)
				cnt += x.second;
		}
		cout << cnt << "\n";
	}
}

int main(){
    solve();
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int cmp(const void *x, const void *y){
	return *(int *)x - *(int *)y;
}

void solve(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n+2];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		int count = 0;
		qsort(a, n, sizeof(int), cmp);
		cout << a[k-1] << "\n";
	}
}

int main(){
	solve();
	return 0;
}
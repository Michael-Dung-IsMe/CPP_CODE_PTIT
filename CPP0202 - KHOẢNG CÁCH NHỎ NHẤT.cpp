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
		int min = a[1] - a[0];
		for(int i = 1; i < n; ++i){
			min = (a[i] - a[i-1] < min ? a[i] - a[i-1] : min);
		}
		cout << min << "\n";
	}
}

int main(){
	solve();
	return 0;
}
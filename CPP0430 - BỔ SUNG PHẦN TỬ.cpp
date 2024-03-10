#include <iostream>
#include <algorithm>
#include <map>
#define ll long long
#define MOD 1000000007
using namespace std;

//Sử dụng cấu trúc dữ liệu map
void solve1(){
	int t; cin >> t;
	while(t--){
		int n, cnt = 0; cin >> n;
		int a[n+1];
		map<int, bool> m;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			m[a[i]] = true;
		}
		int x = *min_element(a, a + n), y = *max_element(a, a + n);
		for(int i = x; i <= y; ++i){
			if(m[i] == false)
				cnt++;
		}
		cout << cnt << "\n";
	}
}

//Sử dụng mảng thông thường
void solve2(){
	int t; cin >> t;
	while(t--){
		int n, cnt = 0; cin >> n;
		int a[n+1];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		for(int i = 1; i < n; ++i){
			if(a[i] - a[i-1] > 1)
				cnt += a[i] - a[i-1] - 1;
		}
		cout << cnt << "\n";
	}
}

int main(){
	solve1();
	solve2();
	return 0;
}
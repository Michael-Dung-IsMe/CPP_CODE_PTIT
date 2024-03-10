#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#define ll long long
#define MOD 1000000007
using namespace std;

//Sử dụng multiset
void solve1(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, k, cnt = 0; cin >> n >> k;
		int a[n+1];
		multiset<int> se;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			se.insert(a[i]);
		}
		for(int i = 0; i < se.size(); ++i){
			if(se.find(k - a[i]) != se.end()){
				if(a[i] == k - a[i]) cnt += se.count(k - a[i]) - 1;
				else cnt += se.count(k - a[i]);
			}
		}
		cout << cnt/2 << "\n";
	}
}

//Sử dụng map
void solve2(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, k, cnt = 0; cin >> n >> k;
		int a[n+1];
		map<int, int> m;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			m[a[i]]++;
		}
		for(int i = 0; i < n; ++i){
			if(m[k - a[i]] > 0){
				if(a[i] == k - a[i]) cnt += m[a[i]] - 1;
				else cnt += m[k - a[i]];
			}
		}
		cout << cnt/2 << "\n";
	}
}

//Sử dụng mảng thông thường
void solve3(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n, k, cnt = 0; cin >> n >> k;
		int a[n+1];
		for(int i = 0; i < n; ++i) cin >> a[i];
		for(int i = 0; i < n; ++i){
			for(int j = i + 1; j < n; ++j)
				if(a[i] + a[j] == k)
					cnt++;
		}
		cout << cnt << "\n";
	}
}

int main(){
    solve1();
    solve2();
    solve3();
    return 0;
}
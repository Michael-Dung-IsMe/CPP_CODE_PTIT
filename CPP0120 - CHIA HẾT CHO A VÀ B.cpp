#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

//Đề bài đúng ra là: chia hết cho A hoặc B =)))

void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int m, n, a, b, cnt = 0;
		cin >> m >> n >> a >> b;
		for(int i = m; i <= n; ++i){
			if(!(i%a) || !(i%b))
				cnt++;
		}
		cout << cnt << "\n";
	}
}

int main(){
    solve();
    return 0;
}
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string a; cin >> a;
		int max = -1;
		for(unsigned int i = 0; i < a.size(); ++i){
			int tmp = 0;
			while(a[i] >= '0' && a[i] <= '9')
				tmp = tmp*10 + (a[i++] - '0');
			if(tmp > max) max = tmp;
		}
		cout << max << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	solve();
	return 0;
}
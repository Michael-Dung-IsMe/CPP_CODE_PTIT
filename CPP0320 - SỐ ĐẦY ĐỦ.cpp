#include <iostream>
#define ll long long
using ui = unsigned int;
using namespace std;

void solve(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; cin >> s;
		int a[10] = {0}, ok = 1;
		for(ui i = 0; i < s.size(); ++i){
			if(s[i] < '0' || s[i] > '9' || s[0] == '0'){
				ok = -1;	break;
			}
			a[s[i] - '0']++;
		}
		if(ok == -1) cout << "INVALID\n";
		else{
			for(int i = 0; i < 10; ++i){
				if(!a[i]){
					ok = 0;	break;
				}
			}
			if(ok) cout << "YES\n";
			else cout << "NO\n";
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	solve();
	return 0;
}
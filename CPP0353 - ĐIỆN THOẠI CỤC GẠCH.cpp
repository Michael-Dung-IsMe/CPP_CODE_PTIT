#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
 
void solve(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; cin >> s;
		int a[s.size() + 2], cnt = 0, ok = 1;
		for(int i = 0; i < s.size(); ++i){
			s[i] = toupper(s[i]);
			if(s[i] >= 'A' && s[i] <= 'C') a[cnt++] = 2;
			else if(s[i] >= 'D' && s[i] <= 'F') a[cnt++] = 3;
			else if(s[i] >= 'G' && s[i] <= 'I') a[cnt++] = 4;
			else if(s[i] >= 'J' && s[i] <= 'L') a[cnt++] = 5;
			else if(s[i] >= 'M' && s[i] <= 'O') a[cnt++] = 6;
			else if(s[i] >= 'P' && s[i] <= 'S') a[cnt++] = 7;
			else if(s[i] >= 'T' && s[i] <= 'V') a[cnt++] = 8;
			else	a[cnt++] = 9;
		}
		for(int i = 0; i < cnt; ++i){
			if(a[i] != a[cnt - 1 - i]){
				ok = 0;
				break;
			}
		}
		if(ok)	cout << "YES\n";
		else	cout << "NO\n";
	}
}
 
int main(){
	solve();
	return 0;
}
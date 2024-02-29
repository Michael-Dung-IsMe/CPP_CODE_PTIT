#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int a, m; cin >> a >> m;
		int min = 1e9;
		for(int i = 0; i < m; ++i){
			if((a * i)%m == 1 && min > (a * i)%m)
				min = i;
		}
		if(min == 1e9)
			cout << "-1\n";
		else
			cout << min << endl;
	}
	return 0;
}
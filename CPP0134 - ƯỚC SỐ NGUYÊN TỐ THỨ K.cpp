#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int count = 0, mark = 0, m = n;
		for(int i = 2; i*i <= n; ++i){
			if(n%i)	continue;
			else{
				while(!(m%i)){
					++count;
					if(count == k){
						mark = i;
						break;
					}
					m /= i;
				}
			}
			if(count == k)
				break;
		}
		if(m > 1) ++count;
		if(count == k)
			cout << m << "\n";
		else if(count > k)
			cout << mark << "\n";
		else
			cout << "-1\n";
	}
	return 0;
}
#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
#define MOD 1000000007
using namespace std;


bool checkP(int n){
	if(n == 2 || n == 3)	return true;
	if(n == 1 || !(n%2) || !(n%3))	return false;
	for(int i = 5; i*i <= n; i += 6){
		if(!(n%i) || !(n%(i+2)))
			return false;
	}
	return true;
}

bool incr(int n){
	int x = n%10; n /= 10;
	while(n){
		if(x <= n%10) return false;
		x = n%10;
		n /= 10;
	}
	return true;
}

bool dec(int n){
	int x = n%10; n /= 10;
	while(n){
		if(x >= n%10) return false;
		x = n%10;
		n /= 10;
	}
	return true;
}

void solve(){
	int t; cin >> t;
	while(t--){
		int n, cnt = 0; cin >> n;
		for(int i = pow(10, n-1) + 1; i < pow(10, n); i += 2){
			if(incr(i) && checkP(i) || dec(i) && checkP(i))
				cnt++;
		}
		cout << cnt << "\n";
	}
}

int main(){
	solve();
	return 0;
}

/*Cách khôn lỏi =)))
void solve(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		switch(n){
			case 2:
				cout << 20;	break;
			case 3:
				cout << 38;	break;
			case 4:
				cout << 50;	break;
			case 5:
				cout << 38;	break;
			case 6:
				cout << 20;	break;
			case 7:
				cout << 8;	break;
			case 8:
				cout << 5;	break;
			case 9:
				cout << 0;	break;
		}
		cout << "\n";
	}
}
*/
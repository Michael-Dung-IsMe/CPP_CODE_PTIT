#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int t; cin >> t;
	while(t--){
		double aX, aY, bX, bY;
		cin >> aX >> aY >> bX >> bY;
		double dis = sqrt((aX - bX) * (aX - bX) + (aY - bY) * (aY - bY));
		printf("%.4lf\n", dis); 
	}
}

int main(){
	solve();
	return 0;
}
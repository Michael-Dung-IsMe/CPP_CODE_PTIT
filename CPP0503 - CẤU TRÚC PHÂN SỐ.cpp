#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct PhanSo{
	ll a, b;
};

ll gcd(ll a, ll b){
	if(a == 0)
		return b;
	return gcd(b%a, a);
}

void nhap(struct PhanSo &PS){
	cin >> PS.a >> PS.b;
}

void rutgon(struct PhanSo &PS){
	ll x = PS.a, y = PS.b;
	PS.a /= gcd(x,y), PS.b /= gcd(x,y);
}

void in(struct PhanSo PS){
	cout << PS.a << "/" << PS.b;
}

int main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
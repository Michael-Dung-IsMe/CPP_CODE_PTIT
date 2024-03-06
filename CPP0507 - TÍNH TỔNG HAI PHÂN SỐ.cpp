#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
	if(a == 0)	return b;
	return gcd(b%a, a); }

ll lcm(ll a, ll b){
	return (a * b)/gcd(a,b); }

struct PhanSo{
	ll tuso, mauso; };

void nhap(struct PhanSo &PS){
	cin >> PS.tuso >> PS.mauso; }

void rutgon(struct PhanSo &x){
	ll y = gcd(x.tuso, x.mauso);
	x.tuso /= y; x.mauso /= y;
}

PhanSo tong(struct PhanSo &a, struct PhanSo &b){
	rutgon(a); rutgon(b);
	ll x = lcm(a.mauso, b.mauso);
	a.tuso = a.tuso * (x / a.mauso) + b.tuso * (x / b.mauso);
	a.mauso = x;
	return a;
}

void in(struct PhanSo x){
	cout << x.tuso << "/" << x.mauso; }

int main(){
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
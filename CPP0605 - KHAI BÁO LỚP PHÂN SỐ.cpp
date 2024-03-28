#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll gcd(ll a, ll b){
	if(a == 0)	return b;
	return gcd(b%a, a);
}

class PhanSo{
	public:
	ll x, y;
	PhanSo(ll a, ll b){
		x = a; y = b;
	}
	friend istream &operator >>(istream &in, PhanSo &a){
		cin >> a.x >> a.y;
		return in;
	}
	void rutgon(){
		ll m = x, n = y;
		x /= gcd(m,n), y /= gcd(m,n);
	}
	friend ostream &operator <<(ostream &out, PhanSo b){
		cout << b.x << '/' << b.y;
		return out;
	}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
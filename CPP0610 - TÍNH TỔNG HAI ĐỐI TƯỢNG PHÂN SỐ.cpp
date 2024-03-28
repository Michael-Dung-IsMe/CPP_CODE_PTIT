#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

class PhanSo{
	public:
		ll a, b;
		PhanSo(ll m = 1, ll n = 1){
			a = m; b = n;
		};
		friend istream &operator >> (istream &in, PhanSo &X){
			cin >> X.a >> X.b;
			return in;
		}
		void rutgon(){
			ll m = __gcd(a, b);
			a /= m; b /= m;
		}
		friend ostream &operator << (ostream &out, PhanSo Z){
			cout << Z.a << '/' << Z.b;
			return out;
		}

		PhanSo operator + (PhanSo Y){
			PhanSo SUM;
			SUM.a = Y.a * b + a * Y.b;
			SUM.b = Y.b * b;
			SUM.rutgon();
			return SUM;
		}
};

int main(){
	ios_base::sync_with_stdio(0);
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
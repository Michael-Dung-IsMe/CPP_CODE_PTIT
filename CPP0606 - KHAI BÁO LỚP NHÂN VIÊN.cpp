#include <iostream>
#include <string>
#include <cstring>
#include <istream>
#include <ostream>
using ll = long long;
using namespace std;

class NhanVien{
	public:
		string name, sex, add;
		int day1, month1, year1, day2, month2, year2; ll tax;
		char c;
	friend istream &operator >> (istream &in, NhanVien &a){
		getline(cin, a.name);
		cin >> a.sex;
		cin.ignore();
		cin >> a.day1 >> a.c >> a.month1 >> a.c >> a.year1;
		cin.ignore();
		getline(cin, a.add);
		cin >> a.tax >> a.day2 >> a.c >> a.month2 >> a.c >> a.year2;
		return in;
	}
	friend ostream &operator >> (ostream &out, NhanVien b){
		cout << "00001" << ' ' << b.name << ' ' << b.sex << ' ';
		printf("%02d/%02d/%04d ", b.day1, b.month1, b.year1);
		cout << b.add << ' ' << b.tax << ' ';
		printf("%02d/%02d/%04d", b.day2, b.month2, b.year2);
		return out;
	}
};

int main(){
  NhanVien a;
  cin >> a;
  cout >> a;
  return 0;
}
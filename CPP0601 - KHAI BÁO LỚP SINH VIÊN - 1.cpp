#include <iostream>
using namespace std;
#define ll long long
#define MAXN 1000000

class SinhVien{
	public :
		string name, clas;
		int day, month, year;
		float gpa;
		char c;
	void nhap(){
		getline(cin, name);
		cin >> clas;
		scanf("%d %c %d %c %d %f", &day, &c, &month, &c, &year, &gpa);
	}
	void xuat(){
		cout << "B20DCCN001 " << name << ' ' << clas << ' ';
		printf("%02d/%02d/%04d %.2f\n", day, month, year, gpa);
	}
};

int main(){
  SinhVien a;
  a.nhap();
  a.xuat();
  return 0;
}
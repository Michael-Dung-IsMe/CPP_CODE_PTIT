#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

struct SinhVien{
	string name, clas;
	int day, month, year;
	float gpa;
	char c;
	friend istream &operator >> (istream &in, SinhVien &a){
		getline(cin, a.name);
		cin >> a.clas;
		scanf("%d %c %d %c %d %f", &a.day, &a.c, &a.month, &a.c, &a.year, &a.gpa);
		return in;
	}
	friend ostream &operator << (ostream &out, SinhVien &b){
		cout << "B20DCCN001 " << b.name << ' ' << b.clas << ' ';
		printf("%02d/%02d/%04d %.2f\n", b.day, b.month, b.year, b.gpa);
		return out;
	}
};

int main(){
  SinhVien a;
  cin >> a;
  cout << a;
  return 0;
}
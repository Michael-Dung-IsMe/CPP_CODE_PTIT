#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct NhanVien{
	string name, sex, add, tax;
	int day1, month1, year1, day2, month2, year2;
};

void nhap(struct NhanVien &NV){
	char s;
	getline(cin, NV.name);
	cin >> NV.sex;
	cin.ignore();
	cin >> NV.day1 >> s >> NV.month1 >> s >> NV.year1;
	cin.ignore();
	getline(cin, NV.add);
	cin >> NV.tax >> NV.day2 >> s >> NV.month2 >> s >> NV.year2;
}

void in(struct NhanVien NV){
	cout << "00001 ";
	cout << NV.name << " " << NV.sex << " ";
	printf("%02d/%02d/%04d ", NV.day1, NV.month1, NV.year1);
	cout << NV.add << " " << NV.tax << " ";
	printf("%02d/%02d/%04d ", NV.day2, NV.month2, NV.year2);
}

int main(){
	struct NhanVien a;
	nhap(a);
	in(a);
	return 0;
}
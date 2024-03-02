#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct SinhVien{
	string name, clas;
	int day, month, year;
	float pt;
};

void nhap(struct SinhVien &SV){
	char s;
	getline(cin, SV.name);
	cin >> SV.clas;
	cin.ignore();
	cin >> SV.day >> s >> SV.month >> s >> SV.year;
	cin >> SV.pt;
}

void in(struct SinhVien SV){
	cout << "B20DCCN001 ";
	cout << SV.name << " " << SV.clas << " ";
	printf("%02d/%02d/%04d ", SV.day, SV.month, SV.year);
	cout << fixed << setprecision(2) << SV.pt;
}

int main(){
	struct SinhVien a;
	nhap(a);
	in(a);
	return 0;
}
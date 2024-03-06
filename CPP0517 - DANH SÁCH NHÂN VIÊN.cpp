#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct NhanVien{
	string name, sex, add, tax;
	int day1, month1, year1, day2, month2, year2;
};

void nhap(struct NhanVien &NV){
	cin.ignore();
	char s;
	getline(cin, NV.name);
	cin >> NV.sex;
	cin.ignore();
	cin >> NV.day1 >> s >> NV.month1 >> s >> NV.year1;
	cin.ignore();
	getline(cin, NV.add);
	cin >> NV.tax >> NV.day2 >> s >> NV.month2 >> s >> NV.year2;
}

void inds(struct NhanVien NV[], int n){
	for(int i = 0; i < n; ++i){
		printf("%05d ", i + 1);
		cout << NV[i].name << " " << NV[i].sex << " ";
		printf("%02d/%02d/%04d ", NV[i].day1, NV[i].month1, NV[i].year1);
		cout << NV[i].add << " " << NV[i].tax << " ";
		printf("%02d/%02d/%04d\n", NV[i].day2, NV[i].month2, NV[i].year2);
	}
}

int main(){
	struct NhanVien ds[50];
	int N, i;
	cin >> N;
	for(i = 0; i < N; i++) nhap(ds[i]);
	inds(ds,N);
	return 0;
}
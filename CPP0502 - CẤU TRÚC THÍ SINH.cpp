#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct ThiSinh{
	string name, birth;
	float a, b, c;
};

void nhap(struct ThiSinh &TS){
	getline(cin, TS.name);
	getline(cin, TS.birth);
	cin >> TS.a >> TS.b >> TS.c;
}

void in(struct ThiSinh TS){
	cout << TS.name << " " << TS.birth << " ";
	cout << fixed << setprecision(1) << TS.a + TS.b + TS.c;
}

int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}
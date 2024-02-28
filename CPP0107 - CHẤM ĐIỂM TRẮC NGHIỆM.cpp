#include <bits/stdc++.h>
#define ll long long
using namespace std;

string ma101 = "ABBADCCABDCCABD";
string ma102 = "ACCABCDDBBCDDBB";

void point(string s, string ma){
	float corr = 0;
	for(int i = 0; i < 29; i += 2){
		if(s[i] == ma[i/2])
			corr++;
	}
	cout << fixed << setprecision(2) << corr * 10/15 << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		if(n == 101)
			point(s, ma101);
		else
			point(s, ma102);
	}
	return 0;
}
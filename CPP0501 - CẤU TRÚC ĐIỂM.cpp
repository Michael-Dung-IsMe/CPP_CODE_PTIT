#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Point{
	double x, y;
};

void input(struct Point &pt){
	cin >> pt.x >> pt.y;
}

double distance(struct Point a, struct Point b){
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main(){
	struct Point A, B;
	int t;
	cin >> t;
	while(t--){
		input(A); input(B);
		cout << fixed << setprecision(4) << distance(A,B) << endl;
	}
	return 0;
}
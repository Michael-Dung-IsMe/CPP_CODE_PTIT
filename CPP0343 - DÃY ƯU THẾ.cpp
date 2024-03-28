#include <iostream>
using ll = long long;
using namespace std;

//Code tham khảo từ: LazyGarde
int main(){
	int t; cin >> t;
	while(t--){
		int a, le = 0, chan = 0, cnt = 0;
		while(a != -1){
			cin >> a;
			if(a%2 == 0) chan++;
			else le++;
			cnt++;
			char k = getchar();
			if(k == '\n') break;
		}
		if((chan > le && !(cnt%2)) || (le > chan && cnt%2))
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	char s[105], res[100][100];
	fgets(s, 105, stdin);
	int cnt = 0, n = strlen(s);
	for(int i = 0; i < n; ++i)
		s[i] = tolower(s[i]);
	char *spr = strtok(s, " ");
	while(spr != NULL){
		strcpy(res[cnt], spr);
		res[cnt][0] = toupper(res[cnt][0]);
		cnt++;
		spr = strtok(NULL, " ");
	}
	for(int i = 0; i < cnt - 1; ++i){
		printf("%s", res[i]);
		if(i != cnt - 2) cout << " ";
		else cout << ", ";
	}
	int k = strlen(res[cnt-1]);
	for(int i = 0; i < k; ++i)
	printf("%c", toupper(res[cnt-1][i]));
}

int main(){
	solve();
	return 0;
}
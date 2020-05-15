#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string s;
	cin >> n;
	int x = 0;
	for(int i = 0; i < n; i++){
		cin >> s;
		if(s == "X++" || s == "++X"){
			x++;
		} else if(s == "X--" || s == "--X"){
			x--;
		} else{
			x = 0;
		}
	}
	cout << x << "\n";
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int t;
	cin >> t;  
	while (t--) {
		string s;
		cin >> s;
 
		int ones = 0;
		int n = s.size();
 
		for (int i = 0; i < n; i++) {
			if (s[i] == '1') {
				ones++;
			}
		}
 
		cout << ones << "\n";
	}
 
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {        
		int n;
		cin >> n;
		vector<string> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// for every dish, place the letters in a set and count their frequency
		vector<int> counter(26, 0);
		for (int i = 0; i < n; i++) {
			set<char> s;
			for (int j = 0; j < (int) a[i].size(); j++) {
				s.insert(a[i][j]);
			}
			for (auto& e : s) {
				counter[e - 'a']++;
			}
		}
		// increment the counter if the frequency of the letter is equal to n
		int cnt = 0;
		for (auto& e : counter) {
			cnt += (e == n);
		}
		cout << cnt << '\n';
	}
	return 0;
}

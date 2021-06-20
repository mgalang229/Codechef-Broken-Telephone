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
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (i > 0) {
				// check if the current element is not equal to the previous element
				if (a[i] != a[i - 1]) {
					// if yes, then increment 'cnt' and continue the loop
					cnt++;
					continue;
				}
			}
			if (i < n - 1) {
				// check if the current element is not equal to the next element
				if (a[i] != a[i + 1]) {
					// if yes, then increment 'cnt' and continue the loop
					cnt++;
					continue;
				}
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}

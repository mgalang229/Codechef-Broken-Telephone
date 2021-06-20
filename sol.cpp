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
		// create 'visited' boolean vector and set all values to false (initially)
		vector<bool> visited(n, false);
		for (int i = 0; i < n - 1; i++) {
			// check if the current element is not equal to the next element
			if (a[i] != a[i + 1]) {
				// if yes, then using the current and next indices set these values
				// to true in the 'visited' boolean vector
				visited[i] = true;
				visited[i + 1] = true;
			}
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (visited[i]) {
				// if the current element in 'visited' boolean vector is true, then increment 'cnt'
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}

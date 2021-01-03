#include<bits/stdc++.h>
using namespace std;

void solve();

int main() {



#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// time_t start , end;

	// time(&start);

	int t = 50;
	cin >> t;
	while (t--) {
		solve();
	}


	// time(&end);

	// printf("time: %f", (double)end - start );

	return 0;
}


void solve() {

	// cout << "aef\n";


	int  n , k;
	cin >> n >> k;

	string str; cin >> str;
	int ans = 0;

	std::vector<int> iron , magnet;

	int ironj = 0 , magnetj = 0 , idx;

	std::vector<int> sheets(n , 0);


	for (int i = 0; i < n ; i++) {

		if (i > 0)sheets[i] = sheets[i - 1];

		if (str[i] == 'I') {

			bool flag = false;

			while (!flag && magnetj < (int)magnet.size()) {

				int val = k + 1 - abs(i - magnet[magnetj]) - (sheets[i] - sheets[magnet[magnetj]]);
				magnetj++;

				if (val > 0) {
					// cout << i << " , " << magnet[magnetj - 1] << " | ";
					ans++;
					flag = true;

				}
			}

			if (!flag) {
				iron.push_back(i);
			}

		} else if (str[i] == 'M') {
			bool flag = false;

			while (!flag && ironj < (int)iron.size()) {
				int val = k + 1 - abs(i - iron[ironj]) - (sheets[i] - sheets[iron[ironj]]);
				ironj++;

				if (val > 0) {
					// cout << i << " , " << iron[ironj - 1] << " | ";

					ans++;
					flag = true;
				}

			}

			if (!flag) {

				magnet.push_back(i);
			}

		} else if (str[i] == ':') {
			sheets[i]++;

		} else if (str[i] == 'X') {
			ironj = iron.size();
			magnetj = magnet.size();
			sheets[i] = 0;

		}

	}


	cout << ans << "\n";

}
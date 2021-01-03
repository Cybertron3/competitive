#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9 + 7;


int moder(ll x) {
	x = x % mod;
	if (x < 0)x += mod;

	return x;
}
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

	int n ; cin >> n;

	ll arr[n + 1];
	for (int i = 0; i < n ; i++) {
		cin >> arr[i];
	}
	arr[n] = 1;

	ll sum[n + 1];
	memset(sum , 0 , sizeof(sum));

	bool deleted[n + 1];
	memset(deleted , false , sizeof(deleted));

	int curr = 0;


	for (int i = 0; i <= n; i++) {

		if (i > 0)sum[i] = sum[i - 1];

		if (arr[i] == 1) {
			if (curr % 2 == 0) {
				sum[i] = (sum[i] + 1) % mod;

			}
			curr++;

			// cout << i << " " << curr << "\n";

		} else if (i + 1 <= n && arr[i + 1] == 1) {
			int j = i + 1;
			int cnt = 0;
			while (j <= n && arr[j] == 1 ) {
				cnt++;
				j++;
			}




			if (cnt % 2 == 1 ) {
				// sum = (sum + (cnt/2) )%mod;

				if (arr[i] % 2 == 0) {
					if (curr % 2 == 0)sum[i] = moder(sum[i] + arr[i] - 1);
					deleted[i] = true;
				} else {
					if (curr % 2 == 0)sum[i] = (sum[i] + arr[i]) % mod;
				}
				curr++;
			} else {
				if (arr[i] % 2 == 1) {
					if (curr % 2 == 0)sum[i] = moder(sum[i] + arr[i] - 1);
					deleted[i] = true;
				} else {
					if (curr % 2 == 0)sum[i] = (sum[i] + arr[i]) % mod;
				}

			}

			i++;

			while (i < j ) {
				sum[i] = sum[i - 1];
				if (curr % 2 == 0)sum[i] = (sum[i] + 1) % mod;
				curr++;
				i++;
			}

			i--;


		} else {
			if (arr[i] % 2 == 1) {
				if (curr % 2 == 0)sum[i] = moder(sum[i] + arr[i] - 1);
				deleted[i] = true;
			} else {
				if (curr % 2 == 0)sum[i] = (sum[i] + arr[i]) % mod;
			}

		}
	}

	bool flag = false;
	if (curr % 2 == 1)flag = true;


	// cout << "sum[n-1] = "  << sum[n - 1] << "\n";
	for (int i = 0 ; i < n ; i++) {
		cout << sum[i] << " ";
	}
	cout << "\n";

	int q; cin >> q;

	while (q--) {
		ll r; cin >> r;
		if (flag) {

			ll quo = r / n;
			ll rem = r % n;
			ll ans = (sum[n - 1] * quo ) % mod;
			if (rem == 0)rem = n;

			if (rem != n)ans = (ans + sum[rem - 1]) % mod;
			if (deleted[rem - 1]) {
				ans = (ans + 1) % mod;
			}


			cout << ans << "\n";
		} else {
			ll quo = r / n;
			ll fact = (quo + 1) / 2;
			ll rem = r % n;

			ll ans = (sum[n - 1] * fact ) % mod;
			if (rem == 0)rem = n;

			if (quo %  2 == 0) {
				if (rem != n)ans = (ans + sum[rem - 1 ]) % mod;
				if (deleted[rem - 1]) {
					ans = (ans + 1) % mod;
				}
			}


			cout << ans << "\n";
		}

	}





}
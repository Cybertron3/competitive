#include<bits/stdc++.h>
using namespace std;


void tests();

int main() {

	int testcase;
	cin >> testcase;

	for (int i = 0; i < testcase; i++) {
		tests();
	}

	return 0;
}


void tests() {
	int n , inp; cin >> n;

	int C[n];

	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> C[i];

	}

	int b1 = 0 , b2 = 0;


	sort( C , C + n);
	b1 = C[n - 1];

	for (int i = n - 2; i >= 0 ; i--) {
		if (b1 < b2) {
			b1 += C[i];
		} else {
			b2 += C[i];
		}
	}


	cout << max(b1 , b2) << "\n";





}
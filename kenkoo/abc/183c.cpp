#include<bits/stdc++.h>
using namespace std;


int ans = 0;
long long T[10][10];
int n , k;

void fun(int x , std::vector<bool> used , int sum) {

	bool flag = false;
	used[x] = true;

	for (int i = 1; i <= n ; i++) {
		if (i == x)continue;
		if (used[i])continue;

		flag = true;

		sum += T[x][i];
		fun(i , used , sum);
		sum -= T[x][i];


	}

	if (!flag && sum + T[x][1] == k)ans++;
}

int main() {

	cin >> n >> k;

	for (int i = 1; i <= n; i++ ) {
		for (int j = 1; j <= n; j++) {
			cin >> T[i][j];
		}
	}

	std::vector<bool> flag(n + 1 , false);
	// memset(flag , false, sizeof(flag));

	fun(1 , flag , 0);

	cout << ans << "\n";




	return 0;
}
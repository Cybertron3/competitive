
int n = (int)grid.size();

int m = (int)grid[0].size();

int dp[n + 1][m + 1];
for (int i = 0; i < n; i++) {
	for (int j = 0 ; j < m; j++) {
		dp[i][j] = 1e8;
	}
}

dp[0][0] = 0;

for (int i = 0; i < n ; i++) {
	for (int j = 0 ; j < m ; j++) {
		if (grid[i][j] == '#') {
			continue;
		}

		if (i - 1 >= 0 ) {
			dp[i][j] = min(dp[i - 1][j] + 1 , dp[i][j]);
		}

		if (i + 1 < n) {
			d[i][j] = min(dp[i + 1][j] + 1 , dp[i][j]);
		}

		if (j - 1 >= 0) {
			dp[i][j] = min(dp[i][j - 1] + 1 , dp[i][j]);
		}
		if (j + 1 < m) {
			dp[i][j] = min(dp[i][j + 1] + 1 , dp[i][j]);
		}
	}
}


int val = dp[n - 1][m - 1];

if (val > maxTime) {
	return "No";
} else {
	return "Yes";
}
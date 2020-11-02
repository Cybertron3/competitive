#include<bits/stdc++.h>
using namespace std;

int main(){

	int p;
	cin >> p;

	if(p > 20){
		cout << "Wrong Infrastructure\n";
		return 0;
	}

	vector<int> dp(25 , 0);

	dp[1] = 1;
	dp[2] = 2;

	for(int i = 3; i <= p; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}

	cout << dp[p] << "\n";


	return 0;
}
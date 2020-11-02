#include<bits/stdc++.h>
using namespace std;

int main(){

	int n; cin >> n;
	std::vector<int> ans(n+1, 0);

	int x = 1 , y;
	int val1 , val2;

	for( y = 2; y <= n ; y++){
		cout << "? " << x << " " << y  << endl;
		cout.flush();
		cin >> val1;
		if(val1== -1)return 0;

		cout << "? " << y << " " << x  << endl;
		cout.flush();
		cin >> val2;
		if(val2 == -1)return 0;

		if(val1 > val2){
			ans[x] = val1;
			x = y;
		}else{
			ans[y] = val2;
		}

	}

	ans[x] = n;

	cout << "! ";

	for(int i = 1 ; i <= n ; i++){
		cout << ans[i] << " ";
	}
	cout << "\n";

	

	



	return 0;
}
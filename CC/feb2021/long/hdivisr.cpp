#include<bits/stdc++.h>
using namespace std;

int main(){

	int n; cin >> n;

	int i = 10;

	while(i > 0){
		if(n % i == 0){
			cout << i << "\n";
			break;
		}
		i--;
	}


	return 0;
}
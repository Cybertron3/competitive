#include<bits/stdc++.h> 
using namespace std;

void solver();

int main(){
	string str;
	cin >> str;

	int n = str.size();
	long long p =1 , sum = 0;
	reverse(str.begin() , str.end()); 
	for(int i = 0; i < n; i++){
		sum += (str[i] - '0' )*p;
		p *= 2;
	}

	cout << sum << "\n";

	return 0;
}


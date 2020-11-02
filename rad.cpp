#include<bits/stdc++.h>
using namespace std;

int main(){

	string str;
	cin >> str;

	int i , n = (int)str.size();

	if(n > 20){
		cout << "Wrong Input\n" ;
		return 0;
	}

	vector<int> freq(26 , 0);

	for(i = 0 ; i< n ; i++){
		freq[str[i] - 'a']++;
	}

	for(i = 0; i < n; i++){
		if(freq[str[i]-'a'] == 1){
			cout << str[i] << "\n";
			return 0;
		}
	}

	cout << "Exceptional String\n";




	return 0;
}
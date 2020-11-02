#include<bits/stdc++.h>
using namespace std;




int main(){
	
	string str;
	getline(cin , str);

	int n = str.size();

	int freq[5];
	memset(freq , 0 , sizeof(freq));

	std::vector<char> final;

	for(int i = 0; i < n; i++){
		if(str[i] == 'a' || str[i] == 'A')freq[0]++;
		else if(str[i] == 'e' || str[i] == 'E')freq[1]++;
		else if(str[i] == 'i' || str[i] == 'I')freq[2]++;
		else if(str[i] == 'o' || str[i] == 'O')freq[3]++;
		else if(str[i] == 'u' || str[i] == 'U')freq[4]++;
		else {
			final.push_back(str[i]);
		}
	}

	for(int i = 0; i< n; i++){
		cout << final[i] ;
	}
	cout << "\n";

	cout << "a:" << freq[0] ;
	cout << "\ne:" << freq[1];
	cout << "\ni:" << freq[2];
	cout << "\no:" << freq[3];
	cout << "\nu:" << freq[4] << "\n";

return 0;

}
#include<bits/stdc++.h> 
using namespace std;

void solver();

int main(){
	int t; cin >> t;
	while(t--){
		solver();
	}


	return 0;
}

int func(string str , string ampm){
	int ti = 0;
	if(ampm[0] == 'A'){
		ti = (str[3] - '0' )*10 + (str[4] - '0');
		if(str[0] != '1' || str[1] != '2'){
			ti += 60* ( (str[0] - '0')*10 + (str[1] - '0') );  
		}
		return ti;
	}else{
		ti = (str[3] - '0' )*10 + (str[4] - '0');
		
		ti += 60* ( (str[0] - '0')*10 + (str[1] - '0') );  
		if(str[0] != '1' || str[1] != '2')ti += (60*12);
		
		return ti;

	}

}

void solver(){
	string str1 , str2 , str3 , str4;
	cin >> str1 >> str2;

	int initial_time = func(str1 , str2);

	int n ; cin >> n;

	// cout << "initial_time = " << initial_time << "\n";

	for(int i = 0; i < n; i++){
		cin >> str1 >> str2 >> str3 >> str4 ;
		if(func(str1 , str2) <= initial_time && initial_time <= func(str3 , str4)){
			cout << 1;

		}else{
			cout << 0;
		}
	}


	cout << '\n';

}
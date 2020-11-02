#include<iostream>
#include<string.h>
//#include<bits/stdc++.h>
using namespace std;

int func(string s, char ch){
	

if (s.find(ch) != string::npos)
    return 1;// find
else
    return 0;// not find
}

int funny(int num){

	int k = 1;
	for(int i = 0 ; i <5 ; i++){
		if(num % (k*10) / k == 0) return 0;
		k = k * 10;
	}

	return 1;

}

int main(){

	int t; scanf("%d",&t);
	
	while(t--){
		

		int n; scanf("%d",&n);

		int arr[n] = {0};
		


		for(int i = 0; i < n; i++){
			string s;
			cin >> s;

		

			arr[i] = func(s, 'a') + 10 * func(s, 'e') + 100* func(s, 'i' ) + 1000* func(s, 'o' ) + 10000 * func(s, 'u' );


		}


		int num;//p=0,res[(n*(n-1))/2];
		long long int ginti = 0;

		for(int i = 0 ; i < n;i++){

			for(int j = i+1; j< n;j++){
				num = arr[i] + arr[j];

				if(num == 11111)ginti++;
				else if(num > 11111) ginti += funny(num);
				
				
			}

		}

	

	

		printf("%lld\n",ginti);

	}

	return 0;
}
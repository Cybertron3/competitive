#include<bits/stdc++.h>
using namespace std;

int main(){

	int t; cin >> t;
	while(t--){

		int n,wina=0,winb=0;
		cin>>n;

		int a , b;

		while(n--)
		{
			int power_a=0,power_b=0;
			cin>>a>>b;
			while (a != 0){
				power_a +=  a % 10;
				a = a / 10;
			}

			while (b != 0){
				power_b += b % 10;
				b = b / 10;
			}

			if(power_a > power_b)wina++;
			else if(power_a < power_b)winb++;
			else{
				winb++;
				wina++;
			}
			
		}
		if(wina>winb)cout<<"0 "<<wina;
		else if(wina<winb)cout<<"1 "<<winb;
		else cout<<"2 "<<wina;

		cout << "\n";
	}

	return 0;
}
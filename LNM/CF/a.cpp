#include<bits/stdc++.h>
using namespace std;



int main(){
	int n ; cin >> n;
	bool flag = false;

	int i , sum = 0 , temp ,f = -1 ,  sev = -1;


	for( i = 0;  i*4 <= n ; i++ ){
		if((n-4*i)%7 == 0 ){
			sev = (n-4*i)/7;
			f = i;
			flag =true;
			break;
		}
	}

	for( i = 0; i<f ; i++){
		cout << 4;

	}

	for(int j = 0; j < sev ; j++){
		cout << 7;
	}

	if(!flag)cout << -1 ;

	cout << "\n";

    return 0;
}
      

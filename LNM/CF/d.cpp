#include<bits/stdc++.h>
using namespace std;



int main(){
    
	long long int arr[3] , rem[3] , sum  = 0;

	for(int  i  = 0; i< 3; i++){
		cin >> arr[i];
		sum  += arr[i] / 3;
		rem[i] = arr[i] % 3;
		arr[i] = arr[i] / 3;



	}

	sum = sum + min(rem[0] , min(rem[1] , rem[2]));

	// cout << sum << endl;


	for(int i  =0 ; i < 3 ; i++){
		if(rem[i] != 2 && arr[i] > 0){

			for(int j = 0 ; j < 3; j++){
				if(i != j ){
					if( rem[j] == 2 ){
						// ok
						
					}else{
						break;
					}
				}


				if(j == 2){
					sum++;
				}


				
			}
		}
	}



	

	cout << sum << endl;


    return 0;
}
      

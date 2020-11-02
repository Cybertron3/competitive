#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


     
     
int main(){

	int arr[20][20];

	int ans = 0 , prod;

	for(int i = 0; i< 20 ; i++){
		for(int j = 0; j< 20 ; j++){
			scanf("%d",&arr[i][j]);
		}
	}

	//for diagonal

	for(int i = 0; i < 17; i++){

		for(int j = 0; j< 17; j++){

			prod = arr[i][j] * arr[i+1][j+1] * arr[i+2][j+2] * arr[i+3][j+3];
			if(prod > ans)ans = prod;
		}

	}


	for(int i = 19; i >= 3; i--){

		for(int j = 19; j>= 3; j--){

			prod = arr[i][j] * arr[i-1][j-1] * arr[i-2][j-2] * arr[i-3][j-3];
			if(prod > ans)ans = prod;
		}

	}



	//for up-down

	for(int i = 0; i < 17 ; i++){
		for(int j = 0; j < 20 ; j++){
			prod = arr[i][j] * arr[i+1][j] * arr[i+2][j] * arr[i+3][j];
			if(prod > ans ) ans = prod; 
		}
	}

	//for left-right

	for(int j = 0; j< 17 ; j++){
		for( int i = 0; i < 20 ; i++ ){
			prod = arr[i][j] * arr[i][j+1] * arr[i][j+2] * arr[i][j+3];
			if(prod > ans) ans = prod;
		}
	}

	

	pd(ans);





           
     
     
        
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
            
	int n; sd(n);

	int arr[n];

	for(int i = 0; i< n ; i++)sd(arr[i]);

	for(int i = 0; i< n ; i++){
		if(arr[i] == 0) arr[i] =  - 1; 
		else if(arr[i] > 0) arr[i] = (-1 *arr[i]) - 1;
	}


	
	
	if(n % 2 == 1){

		int  i, minidx = -1;

		for( i = 0; i< n ; i++){
			if(arr[i] < -1 ){
				
				minidx = i;
				break;
			} 
		}

		for( ; i < n ; i++){
		
			if(arr[i] < arr[minidx] && arr[i] < -1){
				minidx = i;

			}
		}

		if(minidx == -1){
			arr[0] = 0;
		}else{
			arr[minidx] = -1 * arr[minidx] - 1;
		}
		
	}


	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	printf("\n");

    
     
        
    return 0;
}

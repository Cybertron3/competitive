#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

#define pqueue priority_queue<int,vector<int>,greater<int >> 
     
     
int main(){

	int n; sd(n);

	int arr[n];

	for(int i =0 ; i< n ;i++){
		sd(arr[i]);
	}




	int max = 0;

	bool repeating = false;

	for(int i = 1; i< n ;i++){
		if(arr[max] < arr[i] ){
			repeating = false;
			max = i;

		

		}else if(arr[max] == arr[i]){
		 repeating = true;
	
		}
	}



    
	


    if(repeating == false){
    	for(int i = 0; i< n ; i++){
    		if(i != max)printf("%d\n",arr[max] );
    		else {
    			int temp = -1;
    			for(int i = 0 ; i< n; i++){
    				if(arr[i] > temp && arr[i] != arr[max] )temp = arr[i];

    			}

    			pd(temp);
    		}
    	}
    }else{
    	for(int i = 0; i< n; i++){
    		printf("%d\n",arr[max] );
    	}
    }     
     
        
    return 0;
}

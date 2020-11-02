#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d ",x)
     
     
int main(){
            
	int t; sd(t);

	while(t--){
		int n ; sd(n);

		int arr[n];

		for(int i = 0; i< n; i++){
			sd(arr[i]);
		}

		int d = 0, i;

		for( i = 1; i < n-1  ; i++){
			if(arr[i] - arr[i-1] == arr[i+1] - arr[i]){
				d = arr[i] - arr[i-1];
				break;
			}
		}

		if(i == n -1 ){
			d = arr[n-1] - arr[0];
			d = d / (n-1) ;
		}

		if(arr[0] + d != arr[1] && arr[1] + d == arr[2]){
			arr[0] = arr[1] - d;
		}
		

		if(arr[0] + d != arr[1] && arr[1] + d == arr[2]){
			arr[0] = arr[1] - d;
		}else{
			for(int i = 1; i< n; i++){
				if(arr[i] != arr[0] + i*d ){
					arr[i] = arr[0] + i*d ;
					break;
				} 
			}
		}

		for(int i = 0 ; i< n; i++){
			pd(arr[i]);
		}

		printf("\n");

	}           
     
     
        
    return 0;
}

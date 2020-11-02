
// last problem on CC

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

          
int main(){

	int t; sd(t);

	while(t--){

		int n , k;

		sd(n); sd(k);

		int arr[n];

		for(int i = 0; i < n ;i++)sd(arr[i]);

		bool ans = true;


		if(arr[0] == -1){
			if(arr[1] != 1)arr[0]=1;
			else arr[0] = k;
		}



		for(int i = 1; i< n-1 ; i++){
			if(arr[i] == -1){

				int b = 0;
			
				for( int j = 1; j< k ;j++){
					if(arr[i-1]  != j && arr[i+1] != j ){
						arr[i] = j;
						b = 1;

						break;
					}
				}

				if(b == 0){
					ans = false;
					break;
				}

			}
		}

		if(arr[n-1] == -1){
			if(arr[n-2] != 1)arr[n-1]=1;
			else arr[n-1] = k;
			

		}

		for(int i = 1; i< n-1 ; i++){
			//(aise glti toh kaun krta hai)

			//if(arr[i] != arr[i-1] || arr[i] != arr[i-1]){
			if(arr[i] == arr[i-1] ||  arr[i] == arr[i+1]){
			
				ans = false;
				break;
			}
		}


		if(ans == false)printf("NO\n");
		else{
			printf("YES\n");
			for(int i = 0; i< n ;i++){
				printf("%d ", arr[i]);

			}

			printf("\n");
		}





	}


           
     
     
        
    return 0;
}

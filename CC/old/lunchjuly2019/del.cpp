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

	int t; sd(t);

	while(t--){
		int n; sd(n);

		int arr[n];

		for(int i = 0; i< n;i++){

			sd(arr[i]);
		}

		int first = -1;
		bool firstequal = false;

		int i = 0;

		int max = 0;

		for( ; i < n-1 ;i++){
			if(arr[i] == arr[i+1]){
				first = i + 1;
				firstequal = true;
				max = arr[i];
				break;
			}else if(arr[i] > arr[i+1]){
				first = i;
				if(i-1 >= 0)max = arr[i-1];
				break;
			}

		}


		int second = -1;
		bool secondfound = false;

		for( i = n-1; i > 0 && i > first; i--){
			if(arr[i] <= max){
				second = i;
				break;
			}else if(arr[i] == arr[i-1] ){
				second = i - 1 ;
				break;

				
			}else if(arr[i] < arr[i-1]){
				second = i;
				secondfound = true;
				break;
			}

		}

		ll ans;

		while( i> first){
			if(arr[i] != arr[i-1] )break;
			i--;
		}

		if(i != first)secondfound = true;




		if(first == -1){		//no fault
			ans = (ll) ((n*(n+1))/2);

			ans--;

		}else if(secondfound == true){
			int left , right;
			left = first;
			right = n -1 - second;

			ans = left * right;

		}else{

			int left , right;



			left = 




		}










	}

           
     
     
        
    return 0;
}

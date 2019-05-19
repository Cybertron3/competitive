#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
            
	int n , x; sd(n); sd(x);

	int arr[n] , sum = 0;

	for(int i = 0; i< n; i++){
		sd(arr[i]);
	}

	int y = 0 , ans = 0 ;

	while(1){
		y++;
		sum = 0;
		int i;
		for( i = 0;i < n && sum < x ; i++){
			if(arr[i] - y > 0 ) sum += arr[i] - y;
		}
		if(sum >= x)ans = y;
		else break;
	} 

	pd(ans);



	/*sort(arr , arr + n);

	int i = n-1;

	while(x!=0 && arr[i] > 0){

		arr[i]--;
		x--; 
		i--;
		if(arr[i] <= 0 || i <0 ) i = n-1;
	}

	ll sum = 0;

	for(int j = 0 ; j<n ; j++ ){
		sum += arr[j];
	}*/
     
   
     
        
    return 0;
}

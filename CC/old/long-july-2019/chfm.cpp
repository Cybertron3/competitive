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
		int n; sd(n);

		int arr[n];

		ll sum = 0;

		for(int i = 0; i< n ;i++){
			sd(arr[i]);
			sum += arr[i];
		}

		ll intial = sum * (n-1);

		ll ans =-1;

		for(int i = 0; i< n; i++){
			if( (sum - arr[i])*n == intial  ){
				
				ans = i;
				break;
			}
		}

		if(ans != -1)pld(ans+1);
		else printf("Impossible\n");
	
	}
           
     
     
        
    return 0;
}

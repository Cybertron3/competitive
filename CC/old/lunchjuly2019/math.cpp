#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)



ll ans(ll num);
     
     
int main(){

	int t; sd(t);

	while(t--){
		int n ; sd(n);

		int arr[n];

		for(int i = 0; i< n ;i++){

			sd(arr[i]);
		}

		ll max = ans(arr[0]*arr[1]);

		for(int i = 0; i< n ;i++){
			for(int j = i+1; j< n ;j++){
				ll temp = ans((ll)arr[i]*arr[j]);

				if(temp > max)max = temp;

			}
		}

		pld(max);


	}
           
     
     
        
    return 0;
}


ll ans(ll num){

	ll sum = 0; 

	while(num != 0){
		sum += (num % 10);
		num /= 10;
	}


	return sum;

}

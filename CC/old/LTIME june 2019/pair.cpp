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
		int n ; sd(n);

		int arr[n] , temp ;

		int aODD = 0 ,  bODD = 0;

		ll sum = 0;

		for(int  i = 0; i < n; i++){
			sd(temp);

			sum += temp ;

			if(temp % 2 == 1)aODD++;
		}

		for(int i = 0; i< n; i++){
			sd(temp);

			sum += temp;

			if(temp % 2 == 1) bODD++;

		}

		int diff = aODD - bODD;

		if(diff < 0) diff = -1 * diff ;

		sum = sum - ( diff  );

		pld(sum/2);


	}
           
     
     
        
    return 0;
}

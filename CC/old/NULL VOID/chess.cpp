#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

ll func(int n);
     
     
int main(){
            
	int t; sd(t);

	while(t--){
		int n ; sd(n);
		ll ans  = 1;

		if(n%2 == 1)n++;

		
		ans =   (ll)func(n) % 1000000007;

	
		pld(ans);



	}          
     
     
        
    return 0;
}

ll func(int n){

	ll ans = 1 ;
	int i = n;

	int p = 1;

	while( i > n/2){

		ans = ((ans * i )  );
		if(ans % 2 == 0){
			int temp = pow(2 , p);
			ans /= temp;
			p = 1;

		}else p++;

		i--;
	}

	return ans;
}




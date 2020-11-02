#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%I64d",&x)
#define pld(x) printf("%lld\n",x)
#define dracarys(x) printf("%d\n",x)

int main(){

	int t; sd(t);

	while(t--){

		ll n , m ;
		sld(n); sld(m);

		ll ans = 0;

		if(m == n-1) ans = n-1 ;
		else if(m < n-1) ans = -1;
		else if( m > (n *(n-1))/2  + (n) ) ans = -1;
		else{

			m = m - n ;
			ans = 2;

			ll fact = n / 2 ;

			
 

			while(m> 0){

				m = m - fact;
				ans++;

				if(m>0){
					m = m-(n - fact);
					ans++;
				}




			}
		}



	}


           
     
     
        
    return 0;
}

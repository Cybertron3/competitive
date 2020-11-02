#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%I64d",&x)
#define pld(x) printf("%lld\n",x)
#define dracarys(x) printf("%d\n",x)


     
     
int main(){

	int n ; sd(n);

	ll sqr = (ll) n * n  , j = 1 , k = (ll) n *n ;

	for(int i = 0; i< n ;i++){

		for( int itr = 0; itr < n/2; itr++){
			printf("%d ", j + itr);
		}

		j += n / 2; 
		for(int itr = 0; itr < n/2 ; itr++){
			printf("%d ",k - itr );
		}
		k -= n/2;
		
	}  
        
    return 0;
}

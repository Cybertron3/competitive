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
    	int t1 , t2;
    	ll s1 , s2;

    	sld(s1); sld(s2);
    	sd(t1); sd(t2);

    	int x ; sd(x);
    	ll ans ;

    	if( x >= t2 ){
    		int diff= x - t2;
    		ans = s2 * pow( 2 , diff ) ;

    	}else{
    		int diff = t2 - x;

    		ll temp = pow(2 , diff);
    		ans = s2 / temp;
    	}


    	pld(ans);



    }        
           
     
     
        
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

int positive(int num){
	if(num < 0) num = -1 * num;
	
	return num;

	
}     
     
int main(){

	//SPEED;

    int t; sd(t);

    while(t--){

    	int n ; sd(n);

    	int x[n] , y[n] ;

    	ll cpos[n] , cneg[n] ;

    	for(int i = 0 ; i< n ;i++){
    		sd(x[i]);
    		sd(y[i]);
    	} //input completed

    	for(int i = 0;i < n; i++){
    		cpos[i] = y[i] + x[i];
    		cneg[i] = y[i] - x[i];
    	} 

    	ll dmin = 2000000000, dp,dn;

    	//int check = 1;

    	for(int i = 0; i< n && dmin != 0 ; i++){

    		for(int j = i+1; j < n && dmin != 0 ; j++){
    			dp = cpos[i] - (y[j] + x[i]);
    			dn = cneg[i] - (y[j] - x[j]);

    			//if(dp == 0 || dn == 0) check = 0;
    			dp = positive(dp);
    			dn = positive(dn);

    			if(dp<dn && dmin > dp ) dmin = dp; 
    			else if(dn < dp && dmin > dn) dmin = dn;
    			else if(dp == dn && dmin > dp) dmin = dn;
    			 

    		}
    	}

    	

    	if(dmin  != 0) {
    		long double  ans = dmin / 2.0 ;
    		printf("%0.1Lf\n",ans);
    	}else printf("0\n");
		

    }
	
	return 0;
}

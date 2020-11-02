#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


     
     
int main(){

	int n = 1000;

	for(int i= 1 ; i< 1000 ; i++){
		for(int j = i+1; j< n-i; j++){

			int k = n - i - j;

			if(k <= j)continue;
			
				
				if( i*i + j*j == k*k)printf("%d %d %d\n",i , j , k );
	
		}
	}


           
     
     
        
    return 0;
}

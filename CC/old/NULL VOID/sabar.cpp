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
		int a ,b ;
		sd(a); sd(b);

	
		if( a < b){
			int temp  = a;
			 a = b;
			 b = temp;
		}

		int min = a - b + 1;

		printf("%d %d\n", a + b -1 , min );

		
	}          
     
     
        
    return 0;
}

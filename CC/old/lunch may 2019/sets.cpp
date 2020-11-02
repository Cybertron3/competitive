#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

int hcf(int n1, int n2);
     
int main(){
            
	int t; sd(t);

	while(t--){
		ll r , g , l, data;
		sld(l) ; sld(r); sld(g);


		ll gcd = 1, temp ,ans = 0 ;

		while(l <= r && ans == 0){
			temp = hcf( l , g );
			if(temp == g){
				ans++;
				gcd = l;
				data = l;

			}
				
			l++;
		}

		

		while(l <= r){
			temp = hcf( l , g );
			if(temp == g){
				
				gcd = hcf(l , gcd);
				if(gcd == g)ans++;

				

			}
			l++;


		}

		if( ans == 1 && data != g){
			ans = 0;
		}



		pld(ans);

	}          
     
     
        
    return 0;
}

int hcf(int n1, int n2){
    if (n2 != 0)
       return hcf(n2, n1%n2);
    else 
       return n1;
}
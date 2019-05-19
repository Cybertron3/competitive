#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
            
	int n, k;
	sd(n); sd(k);

	int point = n;

	double   ans = (double ) 0 , temp = ( double ) 1;

	while( point--){
		int num = point + 1;
		temp = 1.0 /n;
		
		
		while(num < k){
			num = 2*num;
			temp = (temp/2);
		}
		
		ans =  (ans + temp);

	

	}           


    printf("%0.12lf\n",ans); 
     
        
    return 0;
}

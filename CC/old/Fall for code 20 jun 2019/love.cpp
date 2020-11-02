#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1%n2);
    else 
       return n1;
}


ll LCM(int a , int b){
	return (a * b) / hcf( a , b); 
}

ll firstlast(ll cd , int l , int r);

  
     
int main(){
            
   int t; sd(t);

	while(t--){
   		int a , b , l ,r;

   		sd(a); sd(b); sd(l); sd(r); 
   		if( l > r){
   			int temp = l;
   			l = r;
   			r = temp;
   		}

   		int check = 0;      


   		ll sum = firstlast( a , l , r  ) + firstlast(b , l , r); 

   		if(sum % 2 == 0 || sum % 3 == 0)check++;
   
   		sum -= firstlast( LCM( a , b) , l , r);

   		if(sum < 0) sum = -1 * sum;

   		if(sum % 2 == 0)check++;

   		if( check==0)printf("FAKE LOVE\n");
   		else if(check == 1)printf("LOVE\n");
   		else printf("TRUE LOVE\n");

   	}
        
    return 0;
   
}


ll firstlast(ll cd , int l , int r){

	int startfactor = (l -1) / cd;
	startfactor += 1;

	int endfactor = r / cd;

	if(endfactor == 0)return 0;

	int n = endfactor - startfactor + 1;

	return ( n * ((startfactor * cd ) + (endfactor*cd)   ) ) / 2;

}


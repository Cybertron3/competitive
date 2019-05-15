#include<bits/stdc++.h>
using namespace std;


#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


int main(){
    	int a , b , c;
    	sd(a); sd(b); sd(c);

    	if(a > b && c >= a)printf("1\n");
    	else if(a > b && b > c) printf("1\n");
    	else if(a > b && c >= b && c < a)pd(b);
    	else if( b >= a && c >= b)pd(b);
    	else if(b >= a && b > c && c > a){
    		pd(a);
    	}
    	



    
    return 0;
}




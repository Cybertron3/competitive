#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
            
	int S; sd(S);

	int a , b;

	b = S % 100;
	a  = S / 100;

	
	if(a == 0 && b == 0)printf("NA\n");
	else if(a == 0 && b <= 12 ) printf("YYMM\n");
	else if(a == 0 && b > 12)printf("NA\n");
	else if(b== 0 && a <= 12)printf("MMYY\n");
	else if(b==0 && a > 12)printf("NA\n");
	else if(a > 12 && b > 12) printf("NA\n");
	else if(a > 12 && b <= 12 && b > 0)printf("YYMM\n");
	else if(a <= 12 && b > 12 && a > 0) printf("MMYY\n");
	else if(a <= 12 && b <= 12  && a > 0 && b > 0 )printf("AMBIGUOUS\n");         
    else printf("NA\n"); 
     
        
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define moder 1000000007

int hcf(int n1, int n2);     
     
int main(){
            
	int n , a , b ,c;

	sd(n); sd(a); sd(b); sd(c);

	if(a < b) a = b;

	int gcd = hcf(n , a);
	n = n / gcd;
	a = a / gcd;

	
     
     
        
    return 0;
}


int hcf(int n1, int n2){
    if (n2 != 0)
       return hcf(n2, n1%n2);
    else 
       return n1;
}
#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

int hcf(int n1, int n2);  
int LCM (int a , int b);   
     
int main(){

	int t; sd(t);

	while(t--){
		int n ; sd(n);
		int lcm , num , max ;
		sd(lcm);
		max = lcm;
		for(int i = 0; i< n-1 ; i++){
			sd(num);
			if(max < num) max = num;
			lcm = LCM( lcm , num); 
		}

		if(n==1) lcm = lcm*lcm;

		if(max>= lcm ) printf("-1\n");
		else pd(lcm);

	}
        
    return 0;
}

int LCM (int a , int b){
	return ((a*b) / hcf(a , b));
}


int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1%n2);
    else 
       return n1;
}
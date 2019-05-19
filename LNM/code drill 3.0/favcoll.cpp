#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
            
	int n , x ,y , i= 0;
	sd(n); sd(x); sd(y);

	int num , sum = 0 , pass = 1;

	while(i++ < n && pass == 1){
		sd(num);
		if(num<y)pass = 0;
		else{
			sum += num;
		}
	}

	if(sum < x * n) pass = 0;

	if(pass == 1)printf("Yes\n");
	else printf("No\n");


     
     
        
    return 0;
}

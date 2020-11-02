#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


     
     
int main(){

	int n; sd(n);

	int x = 0 , y = 0, z = 0;

	int temp;

	for(int i = 0; i< n ; i++){
		sd(temp); x += temp;
		sd(temp); y += temp;
		sd(temp); z += temp;
	}

	if( x == 0 && y ==0 && z == 0)printf("YES\n");
	else printf("NO\n");


           
     
     
        
    return 0;
}

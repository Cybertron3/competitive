#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

#define pqueue priority_queue<int,vector<int>,greater<int >> 
     
     
int main(){

	int k , x;

	sd(k); sd(x);

	for(int i = x - (k-1) ; i <= x + (k -1) ; i++){
		printf("%d ",i );
	}
           
     printf("\n");
     
     
        
    return 0;
}

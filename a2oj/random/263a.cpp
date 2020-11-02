#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

int mod (int num){
	if(num < 0) return -1*num;

	return num;
}
     
     
int main(){

	int x , y , temp;

	for(int i =1; i< 6; i++){
		for(int j = 1 ; j < 6 ; j++){
			sd(temp);
			if(temp == 1){
				x = i;
				y = j;
			}
		}
	}

	int ans = mod(3-x) + mod(3-y);

	pd(ans);



           
     
     
        
    return 0;
}

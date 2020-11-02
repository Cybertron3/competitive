#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     

ll shapeArea(int n);
     
int main(){
            
    int n ; sd(n);       
     
    pld(shapeArea(n));
        
    return 0;
}


ll shapeArea(int n) {

    if(n==1)return 1;
    
    return 4*n - 4 + shapeArea( n-1);
}

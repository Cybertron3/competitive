
#include<bits/stdc++.h>
using namespace std;


#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


int main(){
 
 int n;sd(n);
 
 ll arr[n];
 
 for(int i= 0 ; i< n; i++){
     sld(arr[i]);
     
 }
 
 int q; sd(q);
 
 
 for(int i = 0 ; i < q ; i++){
    
    int idx , k ;
    sd(idx);sd(k);

    idx = idx - 1;

    int j = idx -1;

    while(j >= 0 && k != 0){
    	if(arr[idx] > arr[j])j--;
    	else{
    		idx = j;
    		j--;
    		k--;

    	}

    
    }

    

    if(k != 0)printf("-1\n");
    else pd(idx+1);
     
 }
    
    return 0;
}
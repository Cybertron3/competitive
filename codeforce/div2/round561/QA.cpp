#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
ll fact(int n);
ll func(int n);
     
int main(){
	
	int n ; sd(n);

	int arr[26]={0};
	


	while(n--){
		
		string s;	cin >> s;
		arr[s[0] - 'a']++; 

	}      

	ll ginti = 0; 

           
    for(int i = 0; i< 26 ;i++){
    	if(arr[i]<=1)continue;

    	int n = arr[i] / 2;

    	ginti +=  func(n) + func(arr[i] - n);
    }    

    
     
   pld(ginti); 
     
        
    return 0;
}



ll fact(int n){
	if(n<=1)return 1;  
	return n * fact(n-1);
}


ll func(int n){
	if(n<2) return 0;
	ll an = fact(n-2);
	an = fact(n) / (an * 2) ;

	return an;
}
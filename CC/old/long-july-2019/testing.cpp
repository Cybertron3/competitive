#include<bits/stdc++.h>
using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

const ll size = 1000000000;

bool isprime(ll n){
	if(n==2) return true;
	if(n==3) return true;
	if(n%2 == 0) return false;
	if(n%3 == 0) return false;

	ll i = 5,w=2;

	while(i*i <= n){
		if(n%i == 0)return false;

		i += w;
		w = 6 - w;
	}

	return true;



}


int main(){
	//int t; sd(t);

	std::vector<int> allprime;

	
    for(int i = 1000001; i < size ; i = i + 2){
    	if(isprime(i)){
    		allprime.push_back(i);
    		printf("\n\n\n");
    		pd(i);
    		printf("\n\n\n");
    	}	
    	else pd(i);
    }
    
    
           

   	cout<< "no of prime are " << allprime.size() << endl;
	


	for(int i = 0; i < allprime.size() ; i++){
		pd(allprime[i]);
	}

	

    

	return 0;
}



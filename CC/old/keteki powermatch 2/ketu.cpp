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

	int n ; sd(n);

	int ketu,petu;

	petu = (n+1)/2;

	ll sum = 0;

	int temp;

	for(int i = 0; i< petu; i++){
		 sd(temp);
		sum += temp;
	}	
    
    ll ksum = 0;

    for(int i = 0; i < n - petu ; i++){
    	sd(temp);
    	ksum +=temp;
    }
    
    ll diff = ksum - sum;

    pld(diff);

     
        
    return 0;
}

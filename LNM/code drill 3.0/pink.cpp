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

    vector<int> stack , play;

    int num , b = 1 , chec = 1;

    for(int i = 0; i < n && chec == 1 ; i++){
    	sd(num);
    	if(b == num){
    		b++;
    		play.push_back(num);
    		while(!stack.empty() &&  b==stack[stack.size() - 1] ){
                stack.pop_back();
    			play.push_back(b);
    			b++;
    		}
    	}else{

    		stack.push_back(num);

    	}	
    }



    for(int i = 1; i<= n && chec == 1; i++){
    	if(i != play[i-1] ) chec = 0;
    }

    if(chec == 0)printf("Sad\n");
    else printf("Happy\n");


           
  
     
        
    return 0;
}


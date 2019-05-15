#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    scanf("%d",&n);
    
    int num , c =1;

    for(int i = 0 ; i< n ;i++)   	scanf("%d",&num) ;

    for(int i = 0 ; i< n ;i++){
    	
    	if(num > 0) c = c * 1;
    	else if(num < 0) c = c * (-1);
    	else{
    		c = 0;
    		break;
    	}
    }

    printf("%d\n",c);
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


int main(){

	int n , b ,ac, x =0;
	scanf("%d %d %d ",&n ,&b ,&ac);

	int a = ac;

	int s[n];

	for(int i = 0; i< n ; i++) scanf("%d",&s[i]);

	for(int i = 0; i< n ; i++){
		
		if(a== ac && b!= 0) a--;
		else if(b==0){
			if(a==0)break;
			else{
				a--;
			}
		}else if(a==0 && b!= 0){
			b--;
			if(s[i] == 1)a++;
		}else {
			if(s[i]==1){
				a++;
				b--;
			}else a--;

		}
		x = i;

	}

	printf("%d",x+1);


	return 0;
}
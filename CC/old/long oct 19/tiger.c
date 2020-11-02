#include<stdio.h>

int main(){

	double E = 1.0;

	int fact[15];

	fact[0] = 1;

	for(int i = 1 ; i < 15 ; i++){
		fact[i] = i * fact[i-1] ;

		

		E = E + ((double) 1 /(double)fact[i] );

	}

	printf("value of e = %0.7f \n",E );

	return 0;
}

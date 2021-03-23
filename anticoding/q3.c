#include<stdio.h>

#define semicolon ;

int main(int D, char const **C)
{
	int A = atoi(C[1]) , B = 2 semicolon
	long long factorial = 1 semicolon

	while(A > 1){
		factorial *= A semicolon
		A-- semicolon
	}

	printf("%Ld\n", factorial) semicolon
	
	return 0 semicolon
}
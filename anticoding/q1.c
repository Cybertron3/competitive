#include<stdio.h>

main(int D, char const **C)
{
	int B = atoi(C[1]) , A = 2;

	while(B > A){
		if(B % A) A++;
		else {
			printf("NO");
			return 0;
		}
	}

	printf("YES");
	
}
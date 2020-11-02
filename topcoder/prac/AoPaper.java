

class A0Paper{
	public String canBuild(int[] A){
		int i = A.length;
		i--;

		if(A[0] > 0)return "Possible";

		while(i>0){
			A[i-1] += A[i]/2; 

			i--;
		}

		if(A[0] > 0)return "Possible";

		return "Impossible";
	}
}
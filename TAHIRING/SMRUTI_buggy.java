import java.util.*;
import java.io.*;
class Solution{
	static long find_cost(int N, int hcost, int vcost){
		long res = (long)N*(N-1);
		res *= (long)Math.min(hcost,vcost);
		long temp = (N-1)*(long)(Math.max(hcost,vcost));
		return res + temp;
	}
	public static void main(String[] args)throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(br.readLine());
		while(T-- > 0){
			int[] arr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
			int N = arr[0];
			int Ch = arr[1];
			int Cv = arr[2];
			System.out.println(find_cost(N, Ch, Cv));
		}
	}
}
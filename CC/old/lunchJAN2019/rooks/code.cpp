#include<iostream>
using namespace std;


int main(){
	int T,i,j,N,K;
	cin >> T;

	for(i=0;i<T;i++){
		cin >> N >> K ;

		int row[N+1]={0},col[N+1]={0};
		int a,b; 

		for(j=0;j<K;j++){
			cin >> a >> b;
			row[a] = a;
			col[b] = b;
		}
		int diff = N-K;
		cout << diff ;
		int arr[diff * 2], index = 0;
		// for row
		for(j=1;j<=N;j++){
			if(row[j]!= j){
				row[j] = j;
				arr[index] = j ;
				index = index + 2;
			}
			
		}
		//for column
		index = 1;
		for(j=1;j<=N;j++){
			if(col[j]!= j){
				col[j] = j;
				arr[index] = j ;
				index = index + 2;
			}
			
		}

		for(j=0 ; j < (2*diff) ; j++) cout << " " << arr[j] ;
		cout << "\n" ;

	}


return 0;
}

#include<iostream>
using namespace std;
int main(){

	int i,j,N,T,n,count;
	
	cin >> T;

	for( i=0;i < T ; i++){
		cin >> N;
		count=0;
		n=0;
		char S[N];
		
		if(N>=4){
			cin >> S[0] >> S[1];
			if(S[1] == '0' && S[0]=='1') n++ ;
			else if(S[1] == '0' && S[0]=='0'){
				count++;
				n++;
			}

			for(j=2;j<N-2;j++) cin >> S[j]; // for input

			for(j=2;j < N-2 ;j++){
			
				if(S[j]=='0') n++;
				else{
					if(n>2) count= count + ((n-1)/2);
	
					n= 0;
				}
			}	

			cin >> S[N-2] >> S[N-1];
			if(S[N-2] == '0' && S[N-1] == '1'){
				n++;
				if(n>2) count= count + ((n-1)/2);
			}else if(S[N-2] == '0' && S[N-1] == '0'){
				count++;
				n++;
				if(n>2) count= count + ((n-1)/2);
			

			}
		

			
		}else{
			if(N==0) cout << "0\n";
			else if(N==1){
				int single;
				cin >> single;
				if(single==0) count = 1;
				
			}else if(N==2){
				char S[2];
				cin >> S[0] >> S[1];
				if(S[1]=='0' && S[0]=='0') count = 1;
			}else if(N==3){
				char S[3];
				cin >> S[0] >> S[1] >> S[2];
				if(S[1]=='0'){
					if(S[0]=='0') count++;
					if(S[2]=='0') count++;

				}
		
			}


		}

		cout << count<< "\n" ;
	}



return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,T,n,count = 0;
	scanf("%d",&T);

	while(T--){
		cin >> n;
		
		int arr[26] = {0};
		count = 0;

		for(i= 0; i<n; i++){

			string s;
			cin >> s;

			for(j=0;j<26;j++){
				if (s.find((char)(j+97)) == std::string::npos)
					arr[j] = 1; //  1 for no present, 0 for prsnt		
			}

		}

	
		for(i=0;i<26;i++)  if(arr[i]==0) count++;
	
		cout << count << endl;

	}



return 0;
}



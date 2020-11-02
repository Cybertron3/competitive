#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
int evenodd(int x);

//void allxor(int arr[] , vector<int> present , int x , int* Even , int* Odd );

int main(){

	int t; sd(t);

	while(t--){


		int q; sd(q);

		int arr[500000] = {0};

		vector<int> present;

		int Even = 0, Odd = 0;



		while(q--){
			int x;
			sd(x);

			
			
				//allxor(arr , present, x , &Even , &Odd);
			

			int size = present.size();

			for(int i = size - 1; i >= 0   ; i--){

				int rox = x ^ present[i];
				if(arr[rox] == 0 && rox != 0) {
					arr[rox] = 1;
					present.push_back(rox);
					int val = evenodd(rox);
					if(val % 2 == 0)Even++;
					else Odd++;
				}else break;

			}
			if(arr[x] ==0){

				arr[x] = 1;
				present.push_back(x);
				int val = evenodd(x);
				if(val % 2 == 0)Even++;
				else Odd++;
			}	


			printf("%d %d\n",Even , Odd );


		}

	}

        
    return 0;
}


int evenodd(int x){
	int ones = 0;

	while(x!= 0){
		if(x%2 == 1)ones++;
		x = x / 2;
	}

	return ones;
}


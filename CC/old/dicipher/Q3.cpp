#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


     
     
int main(){

	//string str; cin >> str;

	std::vector<int> str;

	char ch;

	int temp;

	while(1){

		sd(temp);

		str.push_back(temp);

		scanf("%c",&ch);
		if(ch != ',')break;

	}

	string first;

	temp = ch;

	first = temp;


	int nstr = str.size();

	string key; cin >> key;

	key.insert(0, first);

	int nkey = key.size();

	int j = 1;

	int count = 0;

	for(int i =0 ; i< nstr ;i++){

		if(j == nkey) j = 1;
		if(count == 256){
			j = 1;
			count = 0;
		}

		/*
		printf("%d ",str[i] );
		printf("%d ",count );
		printf("%d\n",key[j] );

		*/

		int rox = ((int)str[i] ) ^ count ^ ((int)key[j] );



		str[i] = rox;

		count++;
		j++;


	}

	for(int i = 0; i<nstr ; i++){
		printf("%c",str[i] );
	}

	cout << endl;

//	cout << str << endl;


           
     
     
        
    return 0;
}

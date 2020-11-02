#include<bits/stdc++.h>
using namespace std;


int main(){

	int n; 
	cin >> n;
  
  	string STR;

  	cin >> STR;


  	int lft = -1 , rt = -1;


  	for(int i = 0; i < n ; i++){
  		if(STR[i]!='.'){
  			lft = i;
  			break;
  		}
  	}

  	int ed = -1 , st = -1;

  	if(STR[lft] == 'L'){
  		ed = lft;
  		for(int i = n-1 ; i>=0 ; i--){
  			if(STR[i] != '.'){
  				st = 1 + i;
  				break;
  			}
  		}

  	}else{
  		st = lft + 1  ;
  		for(int i = lft; i < n ; i++){
  			if(STR[i] == 'L' )break;
  			if( STR[i] == '.'){
  				ed = i + 1;
  				break;
  			}
  			ed = i+1;
  		}

  		
  	}


  	cout << st << " " << ed << "\n";


    return 0;
}
      

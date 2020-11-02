#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
 
//Compiler version g++ 6.3.0



bool  solution(vector<char> v, int n , string s , string t){

	int i ;
	bool flag = false;
	for(i = 0; i< n ; i++){
    	if(v[i] == s[i] ){
    		continue;
    	}else if(v[i] < s[i]){
    		
    		return false;
    		break;
    	}else {
    		flag = true;
    		
    		break;
    	}

    }

    if(!flag )return false;

    
    	flag = false;
    	for(i=0; i < n; i++){
    		if(v[i] > t[i]){
    			return false;
    			break;
    		}else if(v[i] < t[i]){
    			flag = true;

    		
    			break;
    		}
    	}
    

    if(!flag)return false;

    return true;


}

 
int main()
{
    string s,t;
    cin>> s >> t;
     vector<char> v1, v2;
     int flag = 0 ;
     
     
    int i, n = s.size();
    
    for( i = 0 ; i < n ; i++){
      if( s[i] != t[i]){
       
       	v1.pb(s[i] + 1);
       	v2.pb(s[i]);
        
        break;
      }else{
       	v1.pb(s[i]);
      	v2.pb(s[i]);
      }
      
    }

    for( i++ ; i < n ; i++){
    	v1.pb('a');
    	v2.pb('z');
    }


    


    
    if (solution(v1, n , s , t) ){
      for(i = 0 ; i < n ; i++){
        cout << v1[i];
      }
    }else if(solution(v2 , n , s , t)){
    	for(i = 0; i < n ; i++){
    		cout << v2[i];
    	}
    }
    else{
      cout << "No such string";
    }
     cout << "\n";
}
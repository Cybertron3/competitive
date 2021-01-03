#include<bits/stdc++.h>
using namespace std;

#define FOR(i,x,y) for(int i = x; i < y; i++)

int main(){
    
    
    int n ; cin >> n;
    
    std::vector<char> v;
    
    FOR(i,0,n){
    	if(i%4 == 0){
    		v.push_back('a');
    	}else if(i % 4 == 1){
    		v.push_back('b');
    	}else if(i % 4 == 2){
    		v.push_back('c');
    	}else{
    		v.push_back('d');
    	}
    }
    
    FOR(i,0,n){
    	cout << v[i] ;
    }

    cout << "\n";

    return 0;
}
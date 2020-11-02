/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
    
    ll n , k;
    
    cin >> n >> k;
    
    int arr[n];
    
    for(int i = 0; i< n ; i++)scanf("%d",&arr[i]);
    
    int min = 0;
    
    
    if( k <= 0){
        for(int i = 0; i<n ; i++) if(arr[i] < arr[min] )min = i;
        
        arr[min ] *= k;
 
    }else if(n == 1){
        arr[0] *= arr[0];
        
    }else if(n==2){
        if(arr[0] > arr[1])arr[0] *= k;
        else arr[1] *= k;

    }else{

        int used[n] = {0};

        for(int i = 1; i < n-1 ; i++){
            if(used[i] == 1)continue;       
            ll sum = 0;
            
            if(used[i-1] == 0)sum += arr[i-1];
            if(used[i+1] == 0)sum += arr[i+1]; 
            if(sum <= arr[i]){   
                arr[i] *= k;
                used[i] = 1;
                used[i+1] = 1;         
            }else{
                if(used[i-1] == 0){
                    arr[i-1] *= k;
                    used[i] = 1;
                }      
            }    
        }
        
        if(used[n-1] == 0 && used[n-2] == 0) arr[n-1] *= k;
        
    }
    
    ll ans = 0;
    
    for(int i = 0; i< n ;i++){
        ans  += arr[i];
    }
    
  
    printf("%lld\n",ans);
    
  
    return 0;
}





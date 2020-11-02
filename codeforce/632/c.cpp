//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define S second
#define F first

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

int findSubarraySum(int arr[], int n, int sum) 
{ 
    // STL map to store number of subarrays 
    // starting from index zero having  
    // particular value of sum. 
    unordered_map<int, int> prevSum; 
  
    int res = 0; 
  
    // Sum of elements so far. 
    int currsum = 0; 
  
    for (int i = 0; i < n; i++) { 
  
        // Add current element to sum so far. 
        currsum += arr[i]; 
  
        // If currsum is equal to desired sum, 
        // then a new subarray is found. So 
        // increase count of subarrays. 
        if (currsum == sum)  
            res++;         
  
        // currsum exceeds given sum by currsum  
        //  - sum. Find number of subarrays having  
        // this sum and exclude those subarrays 
        // from currsum by increasing count by  
        // same amount. 
        if (prevSum.find(currsum - sum) !=  
                                  prevSum.end())  
            res += (prevSum[currsum - sum]); 
          
  
        // Add currsum value to count of  
        // different values of sum. 
        prevSum[currsum]++; 
    } 
  
    return res; 
} 

int main(){
    SPEED;

 
    	int n; cin >> n;
    	int arr[n];
    	forn(i,0,n)cin >> arr[i];

    	cout << (n*(n+1))/2 - findSubarraySum(arr , n ,0) << endl;



  
    

    
    return 0;
}
      
       

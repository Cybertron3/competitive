//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;


void printSubStr( string str, int low, int high ) 
{ 
    for( int i = low; i <= high; ++i ) 
        cout << str[i]; 
} 
  
// This function prints the longest palindrome substring 
// It also returns the length of the longest palindrome 
void longestPalSubstr(string str) 
{ 
    // get length of input string 
    int n = str.size();  
  
    // table[i][j] will be false if substring str[i..j] 
    // is not palindrome. 
    // Else table[i][j] will be true 
    bool table[n][n]; 
      
    memset(table, 0, sizeof(table)); 
  
    // All substrings of length 1 are palindromes 
    int maxLength = 1; 
      
    for (int i = 0; i < n; ++i) 
        table[i][i] = true; 
  
    // check for sub-string of length 2. 
    int start = 0; 
    for (int i = 0; i < n-1; ++i) 
    { 
        if (str[i] == str[i+1]) 
        { 
            table[i][i+1] = true; 
            start = i; 
            maxLength = 2; 
        } 
    } 
  
    // Check for lengths greater than 2. k is length 
    // of substring 
    for (int k = 3; k <= n; ++k) 
    { 
        // Fix the starting index 
        for (int i = 0; i < n-k+1 ; ++i) 
        { 
            // Get the ending index of substring from 
            // starting index i and length k 
            int j = i + k - 1; 
  
            // checking for sub-string from ith index to 
            // jth index iff str[i+1] to str[j-1] is a 
            // palindrome 
            if (table[i+1][j-1] && str[i] == str[j]) 
            { 
                table[i][j] = true; 
  
                if (k > maxLength) 
                { 
                    start = i; 
                    maxLength = k; 
                } 
            } 
        } 
    } 
  
   //cout << "Longest palindrome substring is: "; 
   printSubStr( str, start, start + maxLength - 1 ); 
      
    // return length of LPS 
   // return maxLength; 
} 



int main(){
    SPEED;

    int t; cin >> t;

    while(t--){
        string str;

        cin >> str;

        int n = str.size();

        forn()

        longestPalSubstr( str);



    }


    

    
    return 0;
}
      
       

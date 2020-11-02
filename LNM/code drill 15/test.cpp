/* tu swal copy krta hai mai jwaab krega*/
/* ha mai cheating kiya, jaaa , jo ukharna hai ukhara le */
/* https://www.geeksforgeeks.org/lcm-of-n-numbers-modulo-m/ */
 
#include <bits/stdc++.h> 
#define F first 
#define S second 
#define MAX 10000003 
using namespace std; 
  
typedef long long ll; 
const int mod = 1000000007; 
  
int prime[MAX]; 
unordered_map<int, int> max_map; 
  
// Function to return a^n 
int power(int a, int n) 
{ 
    if (n == 0) 
        return 1; 
    int p = power(a, n / 2) % mod; 
    p = (p * p) % mod; 
    if (n & 1) 
        p = (p * a) % mod; 
    return p; 
} 
  
// Function to find the smallest prime factors 
// of numbers upto MAX 
void sieve() 
{ 
    prime[0] = prime[1] = 1; 
    for (int i = 2; i < MAX; i++) { 
        if (prime[i] == 0) { 
            for (int j = i * 2; j < MAX; j += i) { 
                if (prime[j] == 0) { 
                    prime[j] = i; 
                } 
            } 
            prime[i] = i; 
        } 
    } 
} 
  
// Function to return the LCM modulo M 
ll lcmModuloM(const int* ar, int n) 
{ 
  
    for (int i = 0; i < n; i++) { 
        int num = ar[i]; 
        unordered_map<int, int> temp; 
  
        // Temp stores mapping of prime factor to 
        // its power for the current element 
        while (num > 1) { 
  
            // Factor is the smallest prime factor of num 
            int factor = prime[num]; 
  
            // Increase count of factor in temp 
            temp[factor]++; 
  
            // Reduce num by its prime factor 
            num /= factor; 
        } 
  
        for (auto it : temp) { 
  
            // Store the highest power of every prime 
            // found till now in a new map max_map 
            max_map[it.first] = max(max_map[it.first], it.second); 
        } 
    } 
  
    ll ans = 1; 
  
    for (auto it : max_map) { 
  
        // LCM is product of primes to their highest powers modulo M 
        ans = (ans * power(it.F, it.S)) % mod; 
    } 
  
    return ans; 
} 
  
// Driver code 
int main() 
{ 
    sieve(); 
    int n; cin >> n;
    int arr[n];
    
    for(int i =0; i<n ; i++){
        cin >> arr[i] ;
    }
    cout << lcmModuloM(arr, n) << endl; 
    return 0; 
}
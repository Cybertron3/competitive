#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    int j,i;
    unsigned long long int A[n],B[n];
    
    for( i = 0; i < n; i++){
        cin >> A[i] ;
    }
    sort(A,A+n);
    
    for( i = 0; i < n; i++){
        cin >> B[i] ;
    }
    sort(B,B+n);
    
    // Sorting Completed.
    
    long long int diff;
	unsigned long long int count = 0;
    
    for(i = 0; i < n; i++){
        
        diff = A[i] - B[i];
        if(diff < 0) diff = -1 * diff;
        
        count = count + diff;
      //  cout << A[i]<< " "<< B[i]<<"\n" ;
        //cout << "count = " << count << " diff = " << diff << "\n" ;
    }
//    cout << count << "\n" ;
    cout << (count % (1000000000 + 7));
    
    
    return 0;
}

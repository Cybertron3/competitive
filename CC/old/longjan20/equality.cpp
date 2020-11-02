#include<bits/stdc++.h>
using namespace std;
         

int main(){

    int n , Q ;

    cin >> n >> Q;

    int arr[n] , max[n] = {0} , min[n] = {0} ;


    for(int i  = 0 ; i<n ; i++)cin >> arr[i];

    bool flag = false;
    int count = 0;


    for(int i = 1; i< n ; i++)
    {
        if(flag && arr[i-1] > arr[i])
        {
            flag = false;

        }else if(!flag )
        {
            if(arr[i-1] < arr[i])
            {
                count++;
                flag = true;
            }
        }

      

        max[i] = count;
    }


    count = 0;
    flag= false;


    for(int i = 1; i< n ; i++)
    {
        if(flag && arr[i-1] < arr[i])
        {
            flag = false;

        }else if(!flag)
        {
            if(arr[i-1] > arr[i])
            {
                count++;
                flag = true;
            }
        }
        


        min[i] = count;
    }

    
    int l ,r;

    int inc , dec;

    while(Q--){

        cin >> l >> r;

        l--; r--;

        inc = max[r] - max[l];
        dec = min[r] - min[l];

        if(l!=0  ){
            if(arr[l-1] < arr[l] && arr[l] < arr[l+1])inc++;
            if(arr[l-1] > arr[l] && arr[l] > arr[l+1])dec++;
        }


        if(inc == dec ){
            cout << "YES\n";
        }else cout << "NO\n";



    }
         
        
    return 0;
}
      
       
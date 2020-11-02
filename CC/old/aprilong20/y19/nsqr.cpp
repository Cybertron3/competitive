#include<bits/stdc++.h>

using namespace std;

int main()

{

    int t;

    cin>>t;

    while(t--)

    {

        long long int n;

        cin>>n;

        long long int arr[n];

        int c=0;

        for(long long int i=0;i<n;i++)

        {

            cin>>arr[i];

            if((arr[i]%2!=0)||(arr[i]%4==0))

            c++;

        }

        for(long long int i=0;i<n;i++)

        {

           int product=arr[i];

           for(long long int j=i+1;j<n;j++)

           {

               product*=arr[j];

               if(product%4==0)

               {

                  c+=(n-j);

                  break;

               }

           }

        }

        for(long long int i=0;i<n;i++)

        {

           if(arr[i]%2!=0){

           for(long long int j=i+1;j<n;j++)

           {

               if(arr[j]%2!=0)

               {

                  c++;

               }

               else

               break;

           }}

        }

        cout<<c<<endl;

       

    }return 0;

}

 
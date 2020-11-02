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

        long long int c=0;

        for(long long int i=0;i<n;i++)

        {

            cin>>arr[i];

            if(arr[i]%2!=0)

            {

                c++;

            }

        }

        long long int ct=0;

        for(long long int i=0;i<n-1;i++)

        {

           if((arr[i]%2!=0)&&(arr[i+1]%2!=0))

           ct++;

           if((arr[i]%2!=0)&&(arr[i+1]%2==0))

           {

               c+=((ct+1)*ct/2);

               ct=0;

           }

        }

        c+=((ct+1)*ct/2);

        long long int ptr=0,count=0,ptr1=0;

        for(long long int i=0;i<n;i++)

        {

           if(arr[i]%4==0)

           {

                c+=(n-i)*(i+1-ptr);

                ptr=i+1;

                count=0;

           }

           if(arr[i]%4==2)

           {

               count++;

               if(count==1)

               {

                   ptr1=i;

               }

               if(count==2)

               {

                   c+=(n-i)*(ptr1+1-ptr);

                   ptr=ptr1+1;

                   count=1;

                   ptr1=i;

               }

           }

        }

       cout<<c<<"\n";

    }return 0;

}
#include<bits/stdc++.h>
using namespace std;


/*bool check(string str) 
{ 
    int l = str.length(); 
  
    // Empty string 
    if (l == 0) 
       return false; 
  
    // If there is single digit 
    if (l == 1) 
       return ((str[0]-'0')%4 == 0); 
  
    // If number formed by last two digits is 
    // divisible by 4. 
    int last = str[l-1] - '0'; 
    int second_last = str[l-2] - '0'; 
    return ((second_last*10 + last) % 4 == 0); 
}*/
int main()
{
	int t,flag1,flag2,flag3;
	long long sum,i;
	cin>>t;
	string n;
	
	while(t--)
	{
		cin>>n;
		flag1=0;flag2=0;flag3=0;sum=0;
		int flag4=0,flag5=0,count=0;
		long long len= n.size();
		for(i=0;i<len;i++)
			sum=sum+(n[i]-48);
	//	cout<<sum;
		if(sum%3==0)
			flag1=1;
		for(i=0;i<len;i++)
		{
			if((n[i]-48)%2==0)
			{
				count++;
				flag2=1;
				if(count==2)
					break;
			}
		}
		//cout<<count<<flag2<<endl;
		if(flag2==1&&flag1==1)
			flag4=1;
		for(i=0;i<len;i++)
		{
			if((n[i]-48)%5==0)
			{
				flag3=1;
				break;
			}
		}
		//check(n)?flag6=1:flag6=0;
		if(flag2==1&&flag3==1)
			flag5=1;
		if(flag4==1&&flag5==1&&count==2)
			cout<<"red"<<endl;
		else
			cout<<"cyan"<<endl;
	}
}
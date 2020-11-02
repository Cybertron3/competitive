#include<bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

const int mod=1000000007;

int main()
{
	SPEED;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		i//int count[n];
		//memset(count,0,sizeof(count));
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		/*for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if((a[j]-a[i])<=2)
					count[i]++;
			}
		}*/
		int error[n];
		memset(error,100,sizeof(error));
		vector<int> diff;
		for(int i=0;i<n-1;i++)
		{
			int d=a[i+1]-a[i];
			diff.push_back(d);
		}
		int count=0;int min,j=0;
		
		for(int i=0;i<diff.size();i++){
			if(diff[i]<=2)
				count++;
			else
			{
				/*if(min>=count)
				{
					min=count;
				}*/
				error[j]=count;j++;
				if(i!=diff.size()-1)count=0;
			}
		}

		sort(error,error+n);
		min=error[0];
		
		if(count==n-1)
		{
			min=count;
		}
		//sort(count,count+n);
		//cout<<count[0]+1<<" ";
		cout<<min+1<<" ";
		cout<<count+1<<endl;
	}


	return 0;
}


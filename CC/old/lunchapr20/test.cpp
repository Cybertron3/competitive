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
		long long n,s;
		cin>>n;
		cin>>s;
		long long a[n],b[n];
		vector<int> d,f;
		d.push_back(101);
		f.push_back(101);
		for(long long i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(long long i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for(long long i=0;i<n;i++)
		{
			if(b[i]==0)
			{
				d.push_back(a[i]);
			}
			else if(b[i]==1)
			{
				f.push_back(a[i]);
			}
		}
		sort(d.begin(),d.end());
		sort(f.begin(),f.end());
		/*for(long long i=0;i<d.size();i++)
			cout<<d[i]<<" ";
		cout<<endl;
		for(long long i=0;i<f.size();i++)
			cout<<f[i]<<" ";*/
		if((d[0]+f[0])<=(100-s))
			cout<<"yes"<<endl;
		else	cout<<"no"<<endl;
	}
	return 0;
}
//September Long 2017
//Question Link: https://www.codechef.com/SEPT17/problems/MINPERM
//Code By: gozmit
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		if(n%2==0)
		{
			for(i=1;i<=n;i++)
			{
				if(i%2==0)
			 cout<<i-1<<" ";
			 else
			 cout<<i+1<<" ";	
			}
		}
		else
		{
			for(i=1;i<=(n-3);i++)
			{
				if(i%2==0)
			 cout<<i-1<<" ";
			 else
			 cout<<i+1<<" ";
			}
			cout<<n-1<<" "<<n<<" "<<n-2;
		}
		cout<<"\n";
	}
}

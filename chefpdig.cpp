//SEPTEMBER LONG 2017 
//Question Link:https://www.codechef.com/SEPT17/problems/CHEFPDIG 
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n,q,j;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		n=s.size();
		int a[10];
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
		{
			q=(int)s[i];
			q=q-48;
			//cout<<q<<" ";
			a[q]++;
		}
		//cout<<"\n";
		//for(i=0;i<10;i++)
		//cout<<a[i]<<" ";
		//cout<<"\n";
		if(a[6]>0)
		{
			if(a[5]>0)
			cout<<"A";
			if(a[6]>1)
			cout<<"B";
			if(a[7]>0)
			cout<<"C";
			if(a[8]>0)
			cout<<"D";
			if(a[9]>0)
			cout<<"E";
		}
		for(i=7;i<9;i++)
		{
			if(a[i]>0)
			for(j=0;j<10;j++)
			{
			 if(i!=j)	
			 {
			  if(a[j]>0)
			  {
				q=i*10+j;
			 	cout<<(char)q;
			  }
		     }
		     else if(i==j)
		     {
			  if(a[i]>1)
			  {
			    q=i*10+j;
				cout<<(char)q;
		      }
		     }
		    }
		
	    }
	    if(a[9]>0 && a[0]>0)
	    cout<<"Z";
	    cout<<"\n";
}
}

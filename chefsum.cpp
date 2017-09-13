// SEPTEMBER 2017 LONG 
//Question Link: https://www.codechef.com/SEPT17/problems/CHEFSUM
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t,i,n,q;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int v[n],l[n],r[n];
		for(i=0 ; i<n ; i++)
		{
			cin>>v[i];
		}
		l[0] = v[0];
		r[n-1] = v[n-1];
		for(i = 1 ; i < n ; i++)
		{
			l[i] = v[i] + l[i-1];
			r[n-i-1] = v[n-i-1] + r[n-i];
		}
	//	for(i=0;i<n;i++)
	//	{
	//		cout<<l[i]<<" "<<r[i]<<"\n";
	//	}
		for(i=0;i<n;i++)
		{
			l[i] = l[i] + r[i];
		//	cout<< l[i] <<" ";
		}
//		cout<<"\n";
long long int *x=min_element(l,l+n);
//cout<<*x<<"\n";
for(i=0;i<n;i++)
{
	if(*x==l[i])
	break;
}
cout<<i+1<<"\n";
	/*	vector<int> ::iterator result=min_element(sum.begin(),sum.end());
		cout<<distance(sum.begin(),result)<<"\n";
	*/}
}
//mayank aka gozmit :-) 

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int a[1000];
	int sum=0;
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	for(int i=0; i<n; i++)
	{
		sum=sum+a[i];
	}
	
	cout<<sum<<endl;
	
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		for(int k=0; k<(n-i-1); k++)
		cout<<" ";
		for(int j=i; j>=0; j--)
		cout<<"#";
		cout<<"\n";
	}
}

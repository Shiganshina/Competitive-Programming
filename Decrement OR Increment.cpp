#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if((n%4)==0)
	{
		n+=1;
		cout<<n;
	}
	else if((n%4)!=0)
	{
		n-=1;
		cout<<n;
	}
}

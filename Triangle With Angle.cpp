#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b+c)==180)
	{
		if(a>0 && b>0 && c>0)
		cout<<"YES";
		else
		cout<<"NO";
	}
	else
	cout<<"NO";
}

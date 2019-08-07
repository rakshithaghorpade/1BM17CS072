#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
	int i,n,k;
	cout<<"enter n";
	cin>>n;
	int a[n];
	cout<<"enter array elements \n";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"enter key element\n";
	cin>>k;
	int t=-1;
	for(int x:a)
	{
		if(x==k)
		{
			t=1;
			break;
		}
	}
	cout<<t<<endl;
	
}